// Code generated by protoc-gen-go. DO NOT EDIT.
// source: ric-gate/ric-gate.proto

package riccode

import (
	context "context"
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

type CommandReplyRequest_Stage int32

const (
	CommandReplyRequest_UNKNOWN CommandReplyRequest_Stage = 0
	CommandReplyRequest_ERROR   CommandReplyRequest_Stage = 1
	CommandReplyRequest_INLET   CommandReplyRequest_Stage = 2
	CommandReplyRequest_OBJECT  CommandReplyRequest_Stage = 3
	CommandReplyRequest_PACKET  CommandReplyRequest_Stage = 4
)

var CommandReplyRequest_Stage_name = map[int32]string{
	0: "UNKNOWN",
	1: "ERROR",
	2: "INLET",
	3: "OBJECT",
	4: "PACKET",
}

var CommandReplyRequest_Stage_value = map[string]int32{
	"UNKNOWN": 0,
	"ERROR":   1,
	"INLET":   2,
	"OBJECT":  3,
	"PACKET":  4,
}

func (x CommandReplyRequest_Stage) String() string {
	return proto.EnumName(CommandReplyRequest_Stage_name, int32(x))
}

func (CommandReplyRequest_Stage) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_afbbea0661e26988, []int{3, 0}
}

type InitRequest struct {
	InstanceId           string   `protobuf:"bytes,1,opt,name=instance_id,json=instanceId,proto3" json:"instance_id,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *InitRequest) Reset()         { *m = InitRequest{} }
func (m *InitRequest) String() string { return proto.CompactTextString(m) }
func (*InitRequest) ProtoMessage()    {}
func (*InitRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_afbbea0661e26988, []int{0}
}

func (m *InitRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_InitRequest.Unmarshal(m, b)
}
func (m *InitRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_InitRequest.Marshal(b, m, deterministic)
}
func (m *InitRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_InitRequest.Merge(m, src)
}
func (m *InitRequest) XXX_Size() int {
	return xxx_messageInfo_InitRequest.Size(m)
}
func (m *InitRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_InitRequest.DiscardUnknown(m)
}

var xxx_messageInfo_InitRequest proto.InternalMessageInfo

func (m *InitRequest) GetInstanceId() string {
	if m != nil {
		return m.InstanceId
	}
	return ""
}

type AuthRequest struct {
	InstanceId           string   `protobuf:"bytes,1,opt,name=instance_id,json=instanceId,proto3" json:"instance_id,omitempty"`
	Id                   string   `protobuf:"bytes,2,opt,name=id,proto3" json:"id,omitempty"`
	Login                string   `protobuf:"bytes,3,opt,name=login,proto3" json:"login,omitempty"`
	Password             string   `protobuf:"bytes,4,opt,name=password,proto3" json:"password,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *AuthRequest) Reset()         { *m = AuthRequest{} }
func (m *AuthRequest) String() string { return proto.CompactTextString(m) }
func (*AuthRequest) ProtoMessage()    {}
func (*AuthRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_afbbea0661e26988, []int{1}
}

func (m *AuthRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_AuthRequest.Unmarshal(m, b)
}
func (m *AuthRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_AuthRequest.Marshal(b, m, deterministic)
}
func (m *AuthRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_AuthRequest.Merge(m, src)
}
func (m *AuthRequest) XXX_Size() int {
	return xxx_messageInfo_AuthRequest.Size(m)
}
func (m *AuthRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_AuthRequest.DiscardUnknown(m)
}

var xxx_messageInfo_AuthRequest proto.InternalMessageInfo

func (m *AuthRequest) GetInstanceId() string {
	if m != nil {
		return m.InstanceId
	}
	return ""
}

func (m *AuthRequest) GetId() string {
	if m != nil {
		return m.Id
	}
	return ""
}

func (m *AuthRequest) GetLogin() string {
	if m != nil {
		return m.Login
	}
	return ""
}

func (m *AuthRequest) GetPassword() string {
	if m != nil {
		return m.Password
	}
	return ""
}

type DataRequest struct {
	ObjectId             string   `protobuf:"bytes,1,opt,name=object_id,json=objectId,proto3" json:"object_id,omitempty"`
	Data                 []byte   `protobuf:"bytes,2,opt,name=data,proto3" json:"data,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *DataRequest) Reset()         { *m = DataRequest{} }
func (m *DataRequest) String() string { return proto.CompactTextString(m) }
func (*DataRequest) ProtoMessage()    {}
func (*DataRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_afbbea0661e26988, []int{2}
}

func (m *DataRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_DataRequest.Unmarshal(m, b)
}
func (m *DataRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_DataRequest.Marshal(b, m, deterministic)
}
func (m *DataRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_DataRequest.Merge(m, src)
}
func (m *DataRequest) XXX_Size() int {
	return xxx_messageInfo_DataRequest.Size(m)
}
func (m *DataRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_DataRequest.DiscardUnknown(m)
}

var xxx_messageInfo_DataRequest proto.InternalMessageInfo

func (m *DataRequest) GetObjectId() string {
	if m != nil {
		return m.ObjectId
	}
	return ""
}

func (m *DataRequest) GetData() []byte {
	if m != nil {
		return m.Data
	}
	return nil
}

type CommandReplyRequest struct {
	CommandId            string                    `protobuf:"bytes,1,opt,name=command_id,json=commandId,proto3" json:"command_id,omitempty"`
	ObjectId             string                    `protobuf:"bytes,2,opt,name=object_id,json=objectId,proto3" json:"object_id,omitempty"`
	Data                 []byte                    `protobuf:"bytes,3,opt,name=data,proto3" json:"data,omitempty"`
	Stage                CommandReplyRequest_Stage `protobuf:"varint,4,opt,name=stage,proto3,enum=ric.gate.CommandReplyRequest_Stage" json:"stage,omitempty"`
	Error                string                    `protobuf:"bytes,5,opt,name=error,proto3" json:"error,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                  `json:"-"`
	XXX_unrecognized     []byte                    `json:"-"`
	XXX_sizecache        int32                     `json:"-"`
}

func (m *CommandReplyRequest) Reset()         { *m = CommandReplyRequest{} }
func (m *CommandReplyRequest) String() string { return proto.CompactTextString(m) }
func (*CommandReplyRequest) ProtoMessage()    {}
func (*CommandReplyRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_afbbea0661e26988, []int{3}
}

func (m *CommandReplyRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_CommandReplyRequest.Unmarshal(m, b)
}
func (m *CommandReplyRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_CommandReplyRequest.Marshal(b, m, deterministic)
}
func (m *CommandReplyRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_CommandReplyRequest.Merge(m, src)
}
func (m *CommandReplyRequest) XXX_Size() int {
	return xxx_messageInfo_CommandReplyRequest.Size(m)
}
func (m *CommandReplyRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_CommandReplyRequest.DiscardUnknown(m)
}

var xxx_messageInfo_CommandReplyRequest proto.InternalMessageInfo

func (m *CommandReplyRequest) GetCommandId() string {
	if m != nil {
		return m.CommandId
	}
	return ""
}

func (m *CommandReplyRequest) GetObjectId() string {
	if m != nil {
		return m.ObjectId
	}
	return ""
}

func (m *CommandReplyRequest) GetData() []byte {
	if m != nil {
		return m.Data
	}
	return nil
}

func (m *CommandReplyRequest) GetStage() CommandReplyRequest_Stage {
	if m != nil {
		return m.Stage
	}
	return CommandReplyRequest_UNKNOWN
}

func (m *CommandReplyRequest) GetError() string {
	if m != nil {
		return m.Error
	}
	return ""
}

type OfflineRequest struct {
	ObjectId             string   `protobuf:"bytes,1,opt,name=object_id,json=objectId,proto3" json:"object_id,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *OfflineRequest) Reset()         { *m = OfflineRequest{} }
func (m *OfflineRequest) String() string { return proto.CompactTextString(m) }
func (*OfflineRequest) ProtoMessage()    {}
func (*OfflineRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_afbbea0661e26988, []int{4}
}

func (m *OfflineRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_OfflineRequest.Unmarshal(m, b)
}
func (m *OfflineRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_OfflineRequest.Marshal(b, m, deterministic)
}
func (m *OfflineRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_OfflineRequest.Merge(m, src)
}
func (m *OfflineRequest) XXX_Size() int {
	return xxx_messageInfo_OfflineRequest.Size(m)
}
func (m *OfflineRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_OfflineRequest.DiscardUnknown(m)
}

var xxx_messageInfo_OfflineRequest proto.InternalMessageInfo

func (m *OfflineRequest) GetObjectId() string {
	if m != nil {
		return m.ObjectId
	}
	return ""
}

type Command struct {
	CommandId            string   `protobuf:"bytes,1,opt,name=command_id,json=commandId,proto3" json:"command_id,omitempty"`
	ObjectId             string   `protobuf:"bytes,2,opt,name=object_id,json=objectId,proto3" json:"object_id,omitempty"`
	Method               string   `protobuf:"bytes,3,opt,name=method,proto3" json:"method,omitempty"`
	Params               []byte   `protobuf:"bytes,4,opt,name=params,proto3" json:"params,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Command) Reset()         { *m = Command{} }
func (m *Command) String() string { return proto.CompactTextString(m) }
func (*Command) ProtoMessage()    {}
func (*Command) Descriptor() ([]byte, []int) {
	return fileDescriptor_afbbea0661e26988, []int{5}
}

func (m *Command) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Command.Unmarshal(m, b)
}
func (m *Command) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Command.Marshal(b, m, deterministic)
}
func (m *Command) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Command.Merge(m, src)
}
func (m *Command) XXX_Size() int {
	return xxx_messageInfo_Command.Size(m)
}
func (m *Command) XXX_DiscardUnknown() {
	xxx_messageInfo_Command.DiscardUnknown(m)
}

var xxx_messageInfo_Command proto.InternalMessageInfo

func (m *Command) GetCommandId() string {
	if m != nil {
		return m.CommandId
	}
	return ""
}

func (m *Command) GetObjectId() string {
	if m != nil {
		return m.ObjectId
	}
	return ""
}

func (m *Command) GetMethod() string {
	if m != nil {
		return m.Method
	}
	return ""
}

func (m *Command) GetParams() []byte {
	if m != nil {
		return m.Params
	}
	return nil
}

type EmptyResponse struct {
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *EmptyResponse) Reset()         { *m = EmptyResponse{} }
func (m *EmptyResponse) String() string { return proto.CompactTextString(m) }
func (*EmptyResponse) ProtoMessage()    {}
func (*EmptyResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_afbbea0661e26988, []int{6}
}

func (m *EmptyResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_EmptyResponse.Unmarshal(m, b)
}
func (m *EmptyResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_EmptyResponse.Marshal(b, m, deterministic)
}
func (m *EmptyResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_EmptyResponse.Merge(m, src)
}
func (m *EmptyResponse) XXX_Size() int {
	return xxx_messageInfo_EmptyResponse.Size(m)
}
func (m *EmptyResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_EmptyResponse.DiscardUnknown(m)
}

var xxx_messageInfo_EmptyResponse proto.InternalMessageInfo

func init() {
	proto.RegisterEnum("ric.gate.CommandReplyRequest_Stage", CommandReplyRequest_Stage_name, CommandReplyRequest_Stage_value)
	proto.RegisterType((*InitRequest)(nil), "ric.gate.InitRequest")
	proto.RegisterType((*AuthRequest)(nil), "ric.gate.AuthRequest")
	proto.RegisterType((*DataRequest)(nil), "ric.gate.DataRequest")
	proto.RegisterType((*CommandReplyRequest)(nil), "ric.gate.CommandReplyRequest")
	proto.RegisterType((*OfflineRequest)(nil), "ric.gate.OfflineRequest")
	proto.RegisterType((*Command)(nil), "ric.gate.Command")
	proto.RegisterType((*EmptyResponse)(nil), "ric.gate.EmptyResponse")
}

func init() { proto.RegisterFile("ric-gate/ric-gate.proto", fileDescriptor_afbbea0661e26988) }

var fileDescriptor_afbbea0661e26988 = []byte{
	// 501 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xa4, 0x54, 0x5d, 0x8b, 0xd3, 0x40,
	0x14, 0xb5, 0x69, 0xd2, 0x36, 0x37, 0x6b, 0x8d, 0xe3, 0xc7, 0x86, 0xca, 0xa2, 0xc4, 0x17, 0x5f,
	0x36, 0x4a, 0x05, 0x41, 0x05, 0x71, 0x5b, 0x83, 0xa4, 0x2b, 0xad, 0xcc, 0x56, 0x04, 0x5f, 0x64,
	0x36, 0x33, 0xdb, 0x1d, 0x69, 0x32, 0x31, 0x99, 0x22, 0xfb, 0xf3, 0xfc, 0x5b, 0x3e, 0xc9, 0x4c,
	0x12, 0x93, 0xb2, 0x76, 0x59, 0xd8, 0xb7, 0x7b, 0x4f, 0xef, 0x3d, 0x67, 0x7a, 0xee, 0x21, 0xb0,
	0x9f, 0xf3, 0xf8, 0x70, 0x45, 0x24, 0x7b, 0x5e, 0x17, 0x41, 0x96, 0x0b, 0x29, 0xd0, 0x20, 0xe7,
	0x71, 0xa0, 0x7a, 0x3f, 0x00, 0x27, 0x4a, 0xb9, 0xc4, 0xec, 0xe7, 0x86, 0x15, 0x12, 0x3d, 0x06,
	0x87, 0xa7, 0x85, 0x24, 0x69, 0xcc, 0xbe, 0x73, 0xea, 0x75, 0x9e, 0x74, 0x9e, 0xd9, 0x18, 0x6a,
	0x28, 0xa2, 0x7e, 0x06, 0xce, 0xd1, 0x46, 0x9e, 0x5f, 0x77, 0x1e, 0x0d, 0xc1, 0xe0, 0xd4, 0x33,
	0x34, 0x6e, 0x70, 0x8a, 0xee, 0x83, 0xb5, 0x16, 0x2b, 0x9e, 0x7a, 0x5d, 0x0d, 0x95, 0x0d, 0x1a,
	0xc1, 0x20, 0x23, 0x45, 0xf1, 0x4b, 0xe4, 0xd4, 0x33, 0xf5, 0x0f, 0xff, 0x7a, 0xff, 0x1d, 0x38,
	0x1f, 0x88, 0x24, 0xb5, 0xe2, 0x23, 0xb0, 0xc5, 0xe9, 0x0f, 0x16, 0xcb, 0x46, 0x6f, 0x50, 0x02,
	0x11, 0x45, 0x08, 0x4c, 0x4a, 0x24, 0xd1, 0x7a, 0x7b, 0x58, 0xd7, 0xfe, 0x9f, 0x0e, 0xdc, 0x9b,
	0x8a, 0x24, 0x21, 0x29, 0xc5, 0x2c, 0x5b, 0x5f, 0xd4, 0x44, 0x07, 0x00, 0x71, 0x09, 0x37, 0x4c,
	0x76, 0x85, 0x44, 0x74, 0x5b, 0xc7, 0xd8, 0xa1, 0xd3, 0x6d, 0x74, 0xd0, 0x6b, 0xb0, 0x0a, 0x49,
	0x56, 0x4c, 0xff, 0x81, 0xe1, 0xf8, 0x69, 0x50, 0x7b, 0x1c, 0xfc, 0x47, 0x3d, 0x38, 0x51, 0xa3,
	0xb8, 0xdc, 0x50, 0xa6, 0xb0, 0x3c, 0x17, 0xb9, 0x67, 0x95, 0xa6, 0xe8, 0xc6, 0x9f, 0x80, 0xa5,
	0xa7, 0x90, 0x03, 0xfd, 0x2f, 0xf3, 0xe3, 0xf9, 0xe2, 0xeb, 0xdc, 0xbd, 0x85, 0x6c, 0xb0, 0x42,
	0x8c, 0x17, 0xd8, 0xed, 0xa8, 0x32, 0x9a, 0x7f, 0x0a, 0x97, 0xae, 0x81, 0x00, 0x7a, 0x8b, 0xc9,
	0x2c, 0x9c, 0x2e, 0xdd, 0xae, 0xaa, 0x3f, 0x1f, 0x4d, 0x8f, 0xc3, 0xa5, 0x6b, 0xfa, 0x87, 0x30,
	0x5c, 0x9c, 0x9d, 0xad, 0x79, 0xca, 0xae, 0xe3, 0x9f, 0xbf, 0x81, 0x7e, 0xf5, 0xd8, 0x1b, 0xd9,
	0xf3, 0x10, 0x7a, 0x09, 0x93, 0xe7, 0x82, 0x56, 0x57, 0xae, 0x3a, 0x85, 0x67, 0x24, 0x27, 0x49,
	0xa1, 0x3d, 0xda, 0xc3, 0x55, 0xe7, 0xdf, 0x81, 0xdb, 0x61, 0x92, 0xc9, 0x0b, 0xcc, 0x8a, 0x4c,
	0xa4, 0x05, 0x1b, 0xff, 0x36, 0xc0, 0xfe, 0x48, 0x24, 0x8b, 0xd2, 0x35, 0x93, 0x68, 0x0c, 0xa6,
	0xca, 0x28, 0x7a, 0xd0, 0x58, 0xda, 0xca, 0xec, 0xe8, 0xee, 0x25, 0xa7, 0x5f, 0x74, 0xd0, 0x2b,
	0x30, 0x55, 0x4e, 0xdb, 0x3b, 0xad, 0xdc, 0x8e, 0xf6, 0x1b, 0x78, 0x4b, 0x19, 0xbd, 0x81, 0xc1,
	0x09, 0x4b, 0xa9, 0x4a, 0x5c, 0x7b, 0xb7, 0x95, 0xc0, 0xdd, 0xbb, 0x33, 0x70, 0xd5, 0x6e, 0xfb,
	0xdc, 0xe8, 0xe0, 0xca, 0x18, 0xec, 0xe6, 0x7a, 0x0f, 0x8e, 0xe2, 0xaa, 0x8e, 0x87, 0xbc, 0x66,
	0x6e, 0xfb, 0x9e, 0x3b, 0x19, 0xc6, 0x33, 0x70, 0x94, 0x85, 0xf5, 0x3d, 0xdf, 0x42, 0x5f, 0x11,
	0xe2, 0x2c, 0x46, 0x97, 0x0d, 0x1b, 0x5d, 0xfd, 0xcc, 0x89, 0xfd, 0xad, 0x9f, 0xf3, 0x38, 0x16,
	0x94, 0x9d, 0xf6, 0xf4, 0x17, 0xe4, 0xe5, 0xdf, 0x00, 0x00, 0x00, 0xff, 0xff, 0x3d, 0xf9, 0x0a,
	0xdd, 0x5c, 0x04, 0x00, 0x00,
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConn

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion4

// GateInletClient is the client API for GateInlet service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type GateInletClient interface {
	// Init and subscribes to commands from gate
	Init(ctx context.Context, in *InitRequest, opts ...grpc.CallOption) (GateInlet_InitClient, error)
	// Auth new device
	Auth(ctx context.Context, in *AuthRequest, opts ...grpc.CallOption) (*EmptyResponse, error)
	// Send data from device
	SendData(ctx context.Context, in *DataRequest, opts ...grpc.CallOption) (*EmptyResponse, error)
	// Send command reply
	SendCommandReply(ctx context.Context, in *CommandReplyRequest, opts ...grpc.CallOption) (*EmptyResponse, error)
	// Send info about offline
	SendOffline(ctx context.Context, in *OfflineRequest, opts ...grpc.CallOption) (*EmptyResponse, error)
}

type gateInletClient struct {
	cc *grpc.ClientConn
}

func NewGateInletClient(cc *grpc.ClientConn) GateInletClient {
	return &gateInletClient{cc}
}

func (c *gateInletClient) Init(ctx context.Context, in *InitRequest, opts ...grpc.CallOption) (GateInlet_InitClient, error) {
	stream, err := c.cc.NewStream(ctx, &_GateInlet_serviceDesc.Streams[0], "/ric.gate.GateInlet/Init", opts...)
	if err != nil {
		return nil, err
	}
	x := &gateInletInitClient{stream}
	if err := x.ClientStream.SendMsg(in); err != nil {
		return nil, err
	}
	if err := x.ClientStream.CloseSend(); err != nil {
		return nil, err
	}
	return x, nil
}

type GateInlet_InitClient interface {
	Recv() (*Command, error)
	grpc.ClientStream
}

type gateInletInitClient struct {
	grpc.ClientStream
}

func (x *gateInletInitClient) Recv() (*Command, error) {
	m := new(Command)
	if err := x.ClientStream.RecvMsg(m); err != nil {
		return nil, err
	}
	return m, nil
}

func (c *gateInletClient) Auth(ctx context.Context, in *AuthRequest, opts ...grpc.CallOption) (*EmptyResponse, error) {
	out := new(EmptyResponse)
	err := c.cc.Invoke(ctx, "/ric.gate.GateInlet/Auth", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *gateInletClient) SendData(ctx context.Context, in *DataRequest, opts ...grpc.CallOption) (*EmptyResponse, error) {
	out := new(EmptyResponse)
	err := c.cc.Invoke(ctx, "/ric.gate.GateInlet/SendData", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *gateInletClient) SendCommandReply(ctx context.Context, in *CommandReplyRequest, opts ...grpc.CallOption) (*EmptyResponse, error) {
	out := new(EmptyResponse)
	err := c.cc.Invoke(ctx, "/ric.gate.GateInlet/SendCommandReply", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *gateInletClient) SendOffline(ctx context.Context, in *OfflineRequest, opts ...grpc.CallOption) (*EmptyResponse, error) {
	out := new(EmptyResponse)
	err := c.cc.Invoke(ctx, "/ric.gate.GateInlet/SendOffline", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// GateInletServer is the server API for GateInlet service.
type GateInletServer interface {
	// Init and subscribes to commands from gate
	Init(*InitRequest, GateInlet_InitServer) error
	// Auth new device
	Auth(context.Context, *AuthRequest) (*EmptyResponse, error)
	// Send data from device
	SendData(context.Context, *DataRequest) (*EmptyResponse, error)
	// Send command reply
	SendCommandReply(context.Context, *CommandReplyRequest) (*EmptyResponse, error)
	// Send info about offline
	SendOffline(context.Context, *OfflineRequest) (*EmptyResponse, error)
}

// UnimplementedGateInletServer can be embedded to have forward compatible implementations.
type UnimplementedGateInletServer struct {
}

func (*UnimplementedGateInletServer) Init(req *InitRequest, srv GateInlet_InitServer) error {
	return status.Errorf(codes.Unimplemented, "method Init not implemented")
}
func (*UnimplementedGateInletServer) Auth(ctx context.Context, req *AuthRequest) (*EmptyResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method Auth not implemented")
}
func (*UnimplementedGateInletServer) SendData(ctx context.Context, req *DataRequest) (*EmptyResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method SendData not implemented")
}
func (*UnimplementedGateInletServer) SendCommandReply(ctx context.Context, req *CommandReplyRequest) (*EmptyResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method SendCommandReply not implemented")
}
func (*UnimplementedGateInletServer) SendOffline(ctx context.Context, req *OfflineRequest) (*EmptyResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method SendOffline not implemented")
}

func RegisterGateInletServer(s *grpc.Server, srv GateInletServer) {
	s.RegisterService(&_GateInlet_serviceDesc, srv)
}

func _GateInlet_Init_Handler(srv interface{}, stream grpc.ServerStream) error {
	m := new(InitRequest)
	if err := stream.RecvMsg(m); err != nil {
		return err
	}
	return srv.(GateInletServer).Init(m, &gateInletInitServer{stream})
}

type GateInlet_InitServer interface {
	Send(*Command) error
	grpc.ServerStream
}

type gateInletInitServer struct {
	grpc.ServerStream
}

func (x *gateInletInitServer) Send(m *Command) error {
	return x.ServerStream.SendMsg(m)
}

func _GateInlet_Auth_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(AuthRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(GateInletServer).Auth(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/ric.gate.GateInlet/Auth",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(GateInletServer).Auth(ctx, req.(*AuthRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _GateInlet_SendData_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(DataRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(GateInletServer).SendData(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/ric.gate.GateInlet/SendData",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(GateInletServer).SendData(ctx, req.(*DataRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _GateInlet_SendCommandReply_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(CommandReplyRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(GateInletServer).SendCommandReply(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/ric.gate.GateInlet/SendCommandReply",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(GateInletServer).SendCommandReply(ctx, req.(*CommandReplyRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _GateInlet_SendOffline_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(OfflineRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(GateInletServer).SendOffline(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/ric.gate.GateInlet/SendOffline",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(GateInletServer).SendOffline(ctx, req.(*OfflineRequest))
	}
	return interceptor(ctx, in, info, handler)
}

var _GateInlet_serviceDesc = grpc.ServiceDesc{
	ServiceName: "ric.gate.GateInlet",
	HandlerType: (*GateInletServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "Auth",
			Handler:    _GateInlet_Auth_Handler,
		},
		{
			MethodName: "SendData",
			Handler:    _GateInlet_SendData_Handler,
		},
		{
			MethodName: "SendCommandReply",
			Handler:    _GateInlet_SendCommandReply_Handler,
		},
		{
			MethodName: "SendOffline",
			Handler:    _GateInlet_SendOffline_Handler,
		},
	},
	Streams: []grpc.StreamDesc{
		{
			StreamName:    "Init",
			Handler:       _GateInlet_Init_Handler,
			ServerStreams: true,
		},
	},
	Metadata: "ric-gate/ric-gate.proto",
}

// GateCommandClient is the client API for GateCommand service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type GateCommandClient interface {
	// Method to send grpc command from other service to gate
	SendRpc(ctx context.Context, in *Command, opts ...grpc.CallOption) (*CommandReplyRequest, error)
}

type gateCommandClient struct {
	cc *grpc.ClientConn
}

func NewGateCommandClient(cc *grpc.ClientConn) GateCommandClient {
	return &gateCommandClient{cc}
}

func (c *gateCommandClient) SendRpc(ctx context.Context, in *Command, opts ...grpc.CallOption) (*CommandReplyRequest, error) {
	out := new(CommandReplyRequest)
	err := c.cc.Invoke(ctx, "/ric.gate.GateCommand/SendRpc", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// GateCommandServer is the server API for GateCommand service.
type GateCommandServer interface {
	// Method to send grpc command from other service to gate
	SendRpc(context.Context, *Command) (*CommandReplyRequest, error)
}

// UnimplementedGateCommandServer can be embedded to have forward compatible implementations.
type UnimplementedGateCommandServer struct {
}

func (*UnimplementedGateCommandServer) SendRpc(ctx context.Context, req *Command) (*CommandReplyRequest, error) {
	return nil, status.Errorf(codes.Unimplemented, "method SendRpc not implemented")
}

func RegisterGateCommandServer(s *grpc.Server, srv GateCommandServer) {
	s.RegisterService(&_GateCommand_serviceDesc, srv)
}

func _GateCommand_SendRpc_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(Command)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(GateCommandServer).SendRpc(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/ric.gate.GateCommand/SendRpc",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(GateCommandServer).SendRpc(ctx, req.(*Command))
	}
	return interceptor(ctx, in, info, handler)
}

var _GateCommand_serviceDesc = grpc.ServiceDesc{
	ServiceName: "ric.gate.GateCommand",
	HandlerType: (*GateCommandServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "SendRpc",
			Handler:    _GateCommand_SendRpc_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "ric-gate/ric-gate.proto",
}
