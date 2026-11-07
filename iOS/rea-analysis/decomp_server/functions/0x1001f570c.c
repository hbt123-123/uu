// rea decompile_all
// name: FUN_1001f570c
// address: 0x1001f570c
// body: available
// range: 0x1001f570c-0x1001f5aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f570c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  undefined1 auStack_1e0 [344];
  undefined1 auStack_88 [24];
  
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  _swift_beginAccess(param_1 + 0x10,auStack_88,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
    FUN_1000cc648(PTR___swiftEmptyArrayStorage_100995ea0);
  }
  else {
    puVar5 = &DAT_100a7b970;
    FUN_100004bb4(&DAT_100a7b970,&DAT_100812a90);
    _swift_initStackObject();
    dVar10 = 2.96439387504748e-323;
    *(undefined8 *)(puVar5 + 0x18) = 0xc;
    *(undefined8 *)(puVar5 + 0x10) = 6;
    *(undefined8 *)(puVar5 + 0x20) = 0x5f6e6f6973736573;
    *(undefined8 *)(puVar5 + 0x28) = 0xea00000000006469;
    puVar6 = PTR___ss6UInt32VN_100995dc0;
    *(undefined4 *)(puVar5 + 0x30) = *(undefined4 *)(param_1 + 0x10);
    *(undefined **)(puVar5 + 0x48) = puVar6;
    *(undefined8 *)(puVar5 + 0x50) = 0x6574617473;
    *(undefined8 *)(puVar5 + 0x58) = 0xe500000000000000;
    puVar6 = PTR___sSSN_1009957f8;
    if (*(char *)(param_1 + 0x14) == '\0') {
      uVar7 = 0xe700000000000000;
      uVar8 = 0x676e696e6e7572;
    }
    else if (*(char *)(param_1 + 0x14) == '\x01') {
      uVar7 = 0xe800000000000000;
      uVar8 = 0x6465686361746564;
    }
    else {
      uVar7 = 0xe600000000000000;
      uVar8 = 0x646574697865;
    }
    *(undefined8 *)(puVar5 + 0x60) = uVar8;
    *(undefined8 *)(puVar5 + 0x68) = uVar7;
    *(undefined **)(puVar5 + 0x78) = puVar6;
    *(undefined8 *)(puVar5 + 0x80) = 0x7463615f7473616c;
    *(undefined8 *)(puVar5 + 0x88) = 0xee00736d5f657669;
    lVar2 = _TtC14UURemoteServer15TerminalSession::lastActiveTime;
    _swift_beginAccess(param_1 + _TtC14UURemoteServer15TerminalSession::lastActiveTime,auStack_1e0,0
                       ,0);
    (**(code **)(lVar9 + 0x10))
              (auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1 + lVar2,lVar4);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar9 + 8))(auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
    puVar1 = PTR___ss5Int64VN_100995cc0;
    dVar10 = dVar10 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f5a98);
      (*pcVar3)();
    }
    if (dVar10 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f5a9c);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f5aa0);
      (*pcVar3)();
    }
    *(long *)(puVar5 + 0x90) = (long)dVar10;
    *(undefined **)(puVar5 + 0xa8) = puVar1;
    *(undefined8 *)(puVar5 + 0xb0) = 0x5f64657461657263;
    *(undefined8 *)(puVar5 + 0xb8) = 0xed0000736d5f7461;
    __s10Foundation4DateV21timeIntervalSince1970Sdvg
              (_TtC14UURemoteServer15TerminalSession::createdAt);
    dVar10 = dVar10 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f5aa4);
      (*pcVar3)();
    }
    if (dVar10 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f5aa8);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f5aac);
      (*pcVar3)();
    }
    *(long *)(puVar5 + 0xc0) = (long)dVar10;
    *(undefined **)(puVar5 + 0xd8) = puVar1;
    *(undefined8 *)(puVar5 + 0xe0) = 0x6c6c656873;
    *(undefined8 *)(puVar5 + 0xe8) = 0xe500000000000000;
    uVar7 = ((undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::shell))[1];
    *(undefined8 *)(puVar5 + 0xf0) =
         *(undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::shell);
    *(undefined8 *)(puVar5 + 0xf8) = uVar7;
    *(undefined **)(puVar5 + 0x108) = puVar6;
    *(undefined8 *)(puVar5 + 0x110) = 0x656d616e;
    *(undefined8 *)(puVar5 + 0x118) = 0xe400000000000000;
    uVar7 = *(undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::name);
    uVar8 = ((undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::name))[1];
    *(undefined **)(puVar5 + 0x138) = puVar6;
    *(undefined8 *)(puVar5 + 0x120) = uVar7;
    *(undefined8 *)(puVar5 + 0x128) = uVar8;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar8);
    FUN_1000cc648(puVar5);
    _swift_setDeallocating(puVar5);
    puVar6 = &DAT_100a775a0;
    FUN_100004bb4(&DAT_100a775a0,&DAT_10080c1c0);
    _swift_arrayDestroy(puVar5 + 0x20,6,puVar6);
    _swift_release(param_1);
  }
  return;
}

