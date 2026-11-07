// rea decompile_all
// name: FUN_10015a68c
// address: 0x10015a68c
// body: available
// range: 0x10015a68c-0x10015a8f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015a8ec to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10015a68c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_1e0 [16];
  undefined8 local_1d0;
  long lStack_1c8;
  undefined8 *local_1c0;
  long lStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 *local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined8 local_178;
  long local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [160];
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  long lStack_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  
  lVar5 = param_1;
  FUN_10015362c();
  lVar6 = param_5;
  FUN_100192ee0(param_5,*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  _swift_release(lVar5);
  if (lVar6 != 0) {
    param_4 = param_4 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
    _swift_unknownObjectWeakLoadStrong();
    if (param_4 == 0) {
      _swift_release(lVar6);
      return;
    }
    uStack_158 = 0xc000000000000000;
    local_160 = 0;
    lVar5 = *(long *)(lVar6 + 0x28);
    uVar1 = 0;
    if (lVar5 != 0) {
      uVar1 = *(undefined8 *)(lVar6 + 0x20);
    }
    lVar2 = -0x2000000000000000;
    if (lVar5 != 0) {
      lVar2 = lVar5;
    }
    local_198 = param_6;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_90 = *(ulong *)(lVar6 + 0x70);
    local_178 = uVar1;
    local_170 = lVar2;
    if ((long)local_90 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10015a8f4);
      (*pcVar4)();
    }
    if (0x7fffffff < (long)local_90) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10015a8f8);
      (*pcVar4)();
    }
    local_168 = (undefined4)local_90;
    local_188 = 1;
    local_180 = 1;
    local_190 = 1;
    local_b0 = 1;
    local_a8 = 1;
    local_90 = local_90 & 0xffffffff;
    uStack_80 = 0xe000000000000000;
    local_88 = 0;
    local_70 = 0;
    local_a0 = uVar1;
    lStack_98 = lVar2;
    FUN_100193df4(auStack_150,&local_b0);
    uVar1 = local_198;
    FUN_1001bddd8(local_198,auStack_150);
    FUN_100401b14(0);
    local_1a0 = (undefined1 *)&local_1a0;
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_1d0 = uVar1;
    local_1c0 = &local_188;
    pcVar4 = FUN_10016c3a8;
    lStack_1c8 = param_5;
    lStack_1b8 = param_1;
    local_1b0 = param_2;
    uStack_1a8 = param_3;
    FUN_1003fb45c(FUN_10016c3a8,auStack_1e0,0xd0000000000000a4,0x800000010088d870,0xd00000000000001f
                  ,0x80000001008950a0,0x168,7);
    FUN_1001536c4();
    FUN_100145fd0(lVar6);
    _swift_release(pcVar4);
    _swift_release(lVar6);
    _swift_unknownObjectRelease(param_4);
    FUN_10016b308(auStack_150);
    uVar3 = uStack_158;
    uVar1 = local_160;
    _swift_bridgeObjectRelease(local_170);
    FUN_100006cdc(uVar1,uVar3);
  }
  return;
}

