// rea decompile_all
// name: FUN_1004044b0
// address: 0x1004044b0
// body: available
// range: 0x1004044b0-0x10040485b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004044b0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_b0 [3];
  long local_98 [3];
  long local_80 [3];
  long local_68;
  long lStack_60;
  long local_50;
  long lStack_48;
  
  local_68 = 0;
  lStack_60 = -0x2000000000000000;
  __ss11_StringGutsV4growyySiF(0x54);
  local_50 = local_68;
  lStack_48 = lStack_60;
  pcVar4 = (code *)0x80000001008b6230;
  __sSS6appendyySSF(0xd000000000000023,0x80000001008b6230);
  if (DAT_100a892e0 != -1) {
    pcVar4 = FUN_1003db370;
    _swift_once(&DAT_100a892e0,FUN_1003db370);
  }
  plVar1 = DAT_100a8cce8;
  uVar6 = 0x6e776f6e6b6e75;
  plVar3 = DAT_100a8cce8;
  _swift_retain(DAT_100a8cce8);
  FUN_1003d8888();
  (**(code **)(*plVar1 + 0x128))(&local_68);
  _swift_release(plVar1);
  FUN_100006cc8(plVar3,pcVar4);
  lVar2 = local_68;
  if (local_68 == 0) {
    uVar7 = 0xe700000000000000;
    uVar5 = uVar6;
  }
  else {
    _swift_beginAccess(local_68 + 0x40,&local_68,0,0);
    uVar5 = *(undefined8 *)(lVar2 + 0x40);
    uVar7 = *(undefined8 *)(lVar2 + 0x48);
    _swift_bridgeObjectRetain(uVar7);
    _swift_release(lVar2);
  }
  __sSS6appendyySSF(uVar5,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  uVar5 = 0xe500000000000000;
  __sSS6appendyySSF(0x3d6c657220,0xe500000000000000);
  plVar1 = DAT_100a8cce8;
  plVar3 = DAT_100a8cce8;
  _swift_retain(DAT_100a8cce8);
  FUN_1003d8888();
  (**(code **)(*plVar1 + 0x128))(local_80);
  _swift_release(plVar1);
  FUN_100006cc8(plVar3,uVar5);
  if (local_80[0] == 0) {
    uVar7 = 0xe700000000000000;
    uVar5 = uVar6;
  }
  else {
    _swift_beginAccess(local_80[0] + 0x50,local_80,0,0);
    uVar5 = *(undefined8 *)(local_80[0] + 0x50);
    uVar7 = *(undefined8 *)(local_80[0] + 0x58);
    _swift_bridgeObjectRetain(uVar7);
    _swift_release(local_80[0]);
  }
  __sSS6appendyySSF(uVar5,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  uVar5 = 0xea00000000003d65;
  __sSS6appendyySSF(0x676175676e616c20,0xea00000000003d65);
  plVar1 = DAT_100a8cce8;
  plVar3 = DAT_100a8cce8;
  _swift_retain(DAT_100a8cce8);
  FUN_1003d8888();
  (**(code **)(*plVar1 + 0x128))(local_98);
  _swift_release(plVar1);
  FUN_100006cc8(plVar3,uVar5);
  if (local_98[0] == 0) {
    uVar7 = 0xe700000000000000;
    uVar5 = uVar6;
  }
  else {
    _swift_beginAccess(local_98[0] + 0x60,local_98,0,0);
    uVar5 = *(undefined8 *)(local_98[0] + 0x60);
    uVar7 = *(undefined8 *)(local_98[0] + 0x68);
    _swift_bridgeObjectRetain(uVar7);
    _swift_release(local_98[0]);
  }
  __sSS6appendyySSF(uVar5,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  pcVar4 = (code *)0xec0000003d656d61;
  __sSS6appendyySSF(0x4e72657672657320,0xec0000003d656d61);
  if (DAT_100a892f0 != -1) {
    pcVar4 = FUN_1003dbb88;
    _swift_once(&DAT_100a892f0,FUN_1003dbb88);
  }
  plVar1 = DAT_100a8ccf8;
  plVar3 = DAT_100a8ccf8;
  _swift_retain(DAT_100a8ccf8);
  FUN_1003d8888();
  (**(code **)(*plVar1 + 0x128))(local_b0);
  _swift_release(plVar1);
  FUN_100006cc8(plVar3,pcVar4);
  if (local_b0[0] == 0) {
    uVar5 = 0xe700000000000000;
  }
  else {
    _swift_beginAccess(local_b0[0] + 0x10,local_b0,0,0);
    uVar6 = *(undefined8 *)(local_b0[0] + 0x10);
    uVar5 = *(undefined8 *)(local_b0[0] + 0x18);
    _swift_bridgeObjectRetain(uVar5);
    _swift_release(local_b0[0]);
  }
  __sSS6appendyySSF(uVar6,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  uVar6 = 0xec0000003d74736f;
  __sSS6appendyySSF(0x4872657672657320,0xec0000003d74736f);
  FUN_1004050b8();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar6);
  param_1[3] = (long)PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = lStack_48;
  return;
}

