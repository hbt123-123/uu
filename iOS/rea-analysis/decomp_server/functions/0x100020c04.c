// rea decompile_all
// name: FUN_100020c04
// address: 0x100020c04
// body: available
// range: 0x100020c04-0x100020eaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100020c04(undefined8 param_1,uint param_2)

{
  uint uVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  long unaff_x20;
  int iVar5;
  ID self;
  undefined1 auStack_d0 [16];
  int local_c0;
  uint uStack_bc;
  undefined1 auStack_a0 [16];
  int local_90;
  uint uStack_8c;
  undefined1 auStack_78 [24];
  
  FUN_100401b14(0);
  iVar5 = (int)param_1;
  local_90 = iVar5;
  uStack_8c = param_2;
  FUN_1003fb4bc(FUN_10003f6c0,auStack_a0,0xd0000000000000a9,0x8000000100877660,0xd00000000000002b,
                0x80000001008782f0,0x8f4,0);
  _swift_beginAccess(unaff_x20 + 0x88,auStack_78,0x21,0);
  FUN_1001df648(param_1);
  _swift_endAccess(auStack_78);
  self = *(ID *)(unaff_x20 + 0x10);
  IVar2 = _objc_msgSend(self,"screenId");
  if (((int)IVar2 == iVar5) ||
     (IVar2 = _objc_msgSend(self,"videoTrackIndex"), (uint)IVar2 == param_2)) {
    FUN_10001920c();
    thunk_FUN_10004b080();
    IVar3 = IVar2;
    FUN_100045da4();
    _swift_bridgeObjectRelease(IVar2);
    if (*(long *)(IVar3 + 0x10) == 0) {
      _swift_bridgeObjectRelease();
    }
    else {
      uVar1 = *(uint *)(IVar3 + 0x20);
      _swift_bridgeObjectRelease();
      uVar4 = (ulong)uVar1;
      FUN_10001efe0();
      if ((uVar4 >> 0x20 & 1) == 0) {
        _objc_msgSend(self,"setScreenId:",uVar4);
        _objc_msgSend(self,"setVideoTrackIndex:",(ulong)uVar1);
        FUN_10001ab44(self);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_c0 = (int)uVar4;
        uStack_bc = uVar1;
        FUN_1003fb48c(FUN_10003f6e0,auStack_d0,0xd0000000000000a9,0x8000000100877660,
                      &DAT_d000000000000030,0x8000000100878320,0x972,0);
        goto LAB_100020e40;
      }
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_c0 = iVar5;
    uStack_bc = param_2;
    FUN_1003fb48c(FUN_10003f6d8,auStack_d0,0xd0000000000000a9,0x8000000100877660,0xd00000000000002b,
                  0x80000001008782f0,0x8fc,0);
  }
LAB_100020e40:
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_c0 = iVar5;
  uStack_bc = param_2;
  FUN_1003fb4bc(FUN_10003f6cc,auStack_d0,0xd0000000000000a9,0x8000000100877660,0xd00000000000002b,
                0x80000001008782f0,0x8ff,0);
  return;
}

