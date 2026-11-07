// rea decompile_all
// name: FUN_100124848
// address: 0x100124848
// body: available
// range: 0x100124848-0x100124bef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100124b90 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100124848(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  undefined1 auStack_90 [16];
  undefined4 local_80;
  undefined1 auStack_68 [24];
  
  uVar3 = (uint)(param_4 >> 0x20);
  if (((uint)param_5 & 0xff) == 3) {
    uVar3 = uVar3 >> 0x1e;
    local_80 = (int)param_1;
    if (uVar3 == 0) {
      if (param_3 >> 0x3c < 0xf) {
        lVar1 = *(long *)(unaff_x20 +
                         _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession);
        if (lVar1 != 0) {
          FUN_1001238a4(param_2,param_3,param_4);
          FUN_1000c8610(lVar1);
          FUN_1001c59ec(param_1,param_2,param_3);
          FUN_10012390c(param_2,param_3,param_4);
LAB_100124b78:
          _swift_release(lVar1);
          return;
        }
      }
      else {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        FUN_1003fb4ec(FUN_100125ff8,auStack_90,0xd000000000000098,0x800000010088de90,
                      0xd00000000000001c,0x800000010088df60,0x45,0);
      }
    }
    else if (uVar3 == 1) {
      lVar1 = *(long *)(unaff_x20 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession)
      ;
      if (lVar1 != 0) {
        FUN_1000c8120(lVar1);
        FUN_1001207a8(param_1,param_2,param_3,param_4 & 0x3fffffffffffffff,3);
        goto LAB_100124b78;
      }
    }
    else {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      FUN_1003fb4bc(FUN_100125ff0,auStack_90,0xd000000000000098,0x800000010088de90,
                    0xd00000000000001c,0x800000010088df60,0x4a,0);
    }
  }
  else {
    uVar3 = uVar3 >> 0x1e;
    if (uVar3 == 3) {
      lVar1 = *(long *)(unaff_x20 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession)
      ;
      if (lVar1 != 0) {
        FUN_1000c8134();
        if ((param_5 & 0xff) != 0) goto LAB_100124b78;
        _swift_beginAccess(lVar1 + 0x10,auStack_68,0,0);
        lVar2 = lVar1 + 0x10;
        _swift_unknownObjectWeakLoadStrong();
        if (lVar2 != 0) {
          FUN_1000c8244();
          FUN_10010b8d0(param_1,param_2,param_3);
          _swift_release(lVar2);
        }
        _swift_release(lVar1);
      }
    }
    else if (uVar3 == 1) {
      lVar1 = *(long *)(unaff_x20 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession)
      ;
      if (lVar1 != 0) {
        FUN_1000c8120(lVar1);
        FUN_1001207a8(param_1,param_2,param_3,param_4 & 0x3fffffffffffffff,param_5);
        goto LAB_100124b78;
      }
    }
    else {
      FUN_100401b14(0);
      FUN_1003fb4bc(FUN_100124d50,0,0xd000000000000098,0x800000010088de90,0xd00000000000001c,
                    0x800000010088df60,0x54,0);
    }
  }
  return;
}

