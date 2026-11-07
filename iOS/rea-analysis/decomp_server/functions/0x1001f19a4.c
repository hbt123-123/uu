// rea decompile_all
// name: FUN_1001f19a4
// address: 0x1001f19a4
// body: available
// range: 0x1001f19a4-0x1001f1d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f1b30 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f19a4(ulong param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_90 [16];
  
  lVar1 = DAT_100a73be8;
  uVar5 = ((ulong *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName))[1];
  if (uVar5 == 0) {
    return;
  }
  uVar6 = *(ulong *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName);
  _swift_bridgeObjectRetain(uVar5);
  if (lVar1 != -1) {
    _swift_once(&DAT_100a73be8,FUN_1001e92d8);
  }
  lVar1 = DAT_100a7d518;
  if (*(long *)(DAT_100a7d518 + 0x10) != 0) {
    _swift_bridgeObjectRetain(DAT_100a7d518);
    uVar3 = param_1;
    uVar4 = param_2;
    FUN_1001a2c70();
    if ((uVar4 & 1) != 0) {
      iVar2 = *(int *)(*(long *)(lVar1 + 0x38) + uVar3 * 4);
      _swift_bridgeObjectRelease(lVar1);
      if ((param_1 != 0x4c4c494b474953) || (param_2 != 0xe700000000000000)) {
        uVar3 = param_1;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_1,param_2,0x4c4c494b474953,0xe700000000000000,0);
        if (((uVar3 & 1) == 0) &&
           ((param_1 != 0x4d524554474953 || param_2 != 0xe700000000000000 &&
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (param_1,param_2,0x4d524554474953,0xe700000000000000,0), (param_1 & 1) == 0))
           )) {
          _swift_bridgeObjectRelease(uVar5);
          if (*(pid_t *)(unaff_x20 + 0x1c) < 1) {
            FUN_100401b14(0);
            FUN_1003fb4ec(FUN_1001fa800);
            return;
          }
          iVar2 = _kill(*(pid_t *)(unaff_x20 + 0x1c),iVar2);
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          if (-1 < iVar2) {
            FUN_1003fb48c(FUN_1001fa808,auStack_90,0xd000000000000095,0x80000001008a00c0,
                          0xd000000000000014,0x80000001008a1a90,0x4d8,0);
            return;
          }
          FUN_1003fb4ec(FUN_1001fa814,auStack_90,0xd000000000000095,0x80000001008a00c0,
                        0xd000000000000014,0x80000001008a1a90,0x4d6,0);
          return;
        }
      }
      if (*(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxController) == 0) {
        _swift_bridgeObjectRelease(uVar5);
      }
      else {
        FUN_1000a3488(uVar6,uVar5);
        _swift_bridgeObjectRelease(uVar5);
        if ((uVar6 & 1) != 0) {
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          FUN_1003fb48c(FUN_1001fa82c,auStack_90,0xd000000000000095,0x80000001008a00c0,
                        0xd000000000000014,0x80000001008a1a90,0x4c9,0);
          return;
        }
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      FUN_1003fb4ec(FUN_1001fa820,auStack_90,0xd000000000000095,0x80000001008a00c0,
                    0xd000000000000014,0x80000001008a1a90,0x4cb,0);
      return;
    }
    _swift_bridgeObjectRelease(lVar1);
  }
  _swift_bridgeObjectRelease(uVar5);
  return;
}

