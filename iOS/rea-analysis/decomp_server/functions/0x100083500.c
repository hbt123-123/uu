// rea decompile_all
// name: FUN_100083500
// address: 0x100083500
// body: available
// range: 0x100083500-0x1000837f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100083500(int param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long *plVar7;
  code *pcVar8;
  undefined1 auStack_f0 [16];
  int local_e0;
  int iStack_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c0 [3];
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90 [3];
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (((*(byte *)(unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::restoringPersistedSettings)
       & 1) == 0) && (0 < param_1)) {
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar6 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                     _TtC14UURemoteServer15StreamerManager::dispatcher);
    if (((lVar6 != 0) &&
        (lVar6 = *(long *)(lVar6 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
        lVar6 != 0)) &&
       (*(int *)(lVar6 + _TtC14UURemoteServer22StreamerConnectSession::handle) == param_2)) {
      FUN_1000c7b64();
      uVar4 = *(ulong *)(lVar6 + 0x30);
      uVar1 = *(ulong *)(lVar6 + 0x38);
      _swift_bridgeObjectRetain(uVar1);
      _swift_release(lVar6);
      if (uVar1 != 0) {
        uVar3 = uVar4 & 0xffffffffffff;
        if ((uVar1 & 0x2000000000000000) != 0) {
          uVar3 = uVar1 >> 0x38 & 0xf;
        }
        if (uVar3 != 0) {
          uVar3 = uVar4;
          FUN_1001a11bc(uVar4,uVar1);
          plVar7 = *(long **)(uVar3 + 0x30);
          pcVar8 = *(code **)(*plVar7 + 0xb0);
          _swift_retain(plVar7);
          (*pcVar8)(local_c0);
          _swift_release(plVar7);
          _swift_release(uVar3);
          iVar2 = local_a4;
          local_90[0] = local_c0[0];
          uStack_68 = uStack_98;
          local_70 = local_a0;
          local_74 = param_1;
          FUN_1001a11bc(uVar4,uVar1);
          _swift_bridgeObjectRelease(uVar1);
          local_c0[0] = local_90[0];
          local_a4 = local_74;
          uStack_98 = uStack_68;
          local_a0 = local_70;
          plVar7 = *(long **)(uVar4 + 0x30);
          pcVar8 = *(code **)(*plVar7 + 0xb8);
          _swift_retain(plVar7);
          (*pcVar8)(local_c0);
          _swift_release(plVar7);
          _swift_release(uVar4);
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_d8 = iVar2;
          local_d0 = local_90;
          local_e0 = param_2;
          iStack_dc = param_1;
          FUN_1003fb45c(FUN_1000916d0,auStack_f0,0xd00000000000009f,0x800000010087e740,
                        0xd000000000000021,0x800000010087f200,0x352,0);
          return;
        }
        _swift_bridgeObjectRelease(uVar1);
      }
    }
  }
  uVar5 = 0;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)(uVar5);
  local_d0 = (undefined8 *)CONCAT44(param_1,param_2);
  FUN_1003fb45c(FUN_1000916c4,&local_e0,0xd00000000000009f,0x800000010087e740,0xd000000000000021,
                0x800000010087f200,0x34b,0);
  return;
}

