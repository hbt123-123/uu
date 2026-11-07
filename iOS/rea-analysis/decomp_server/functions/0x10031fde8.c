// rea decompile_all
// name: FUN_10031fde8
// address: 0x10031fde8
// body: available
// range: 0x10031fde8-0x10032031b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003202e4) */

void FUN_10031fde8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  long *plVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 local_120;
  long local_118;
  long local_110;
  ulong local_108;
  code *local_100;
  ulong local_f8;
  code *local_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  undefined1 auStack_a0 [31];
  byte local_81;
  undefined1 auStack_80 [32];
  
  _swift_unownedRetainStrong();
  _swift_unownedRetain();
  _swift_release();
  puVar4 = &DAT_100a85c78;
  FUN_100004bb4(&DAT_100a85c78,&DAT_10081a2d8);
  local_c0 = *(long *)(puVar4 + -8);
  lVar13 = (long)&local_120 - (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar9 = *(code **)(local_c0 + 0x10);
  (*pcVar9)(lVar13,param_2,puVar4);
  _swift_unownedRetainStrong();
  _swift_unownedRetain();
  _swift_unownedRetain();
  _swift_release();
  local_b8 = puVar4;
  (*pcVar9)(param_1,lVar13,puVar4);
  puVar4 = &DAT_100a85c80;
  FUN_100004bb4(&DAT_100a85c80,&DAT_10081a2e0);
  iVar2 = *(int *)(puVar4 + 0x1c);
  *(undefined8 *)(param_1 + iVar2) = 0;
  ((undefined8 *)(param_1 + iVar2))[1] = 0;
  puVar5 = &DAT_100a85c88;
  FUN_100004bb4(&DAT_100a85c88,&DAT_10081a2e8);
  lVar11 = *(long *)(puVar5 + -8);
  lVar15 = lVar13 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100a85c90;
  FUN_100004bb4(&DAT_100a85c90,&DAT_10081a2f0);
  lVar17 = *(long *)(puVar6 + -8);
  local_b0 = *(long *)(lVar17 + 0x40);
  lVar18 = lVar15 - (local_b0 + 0xfU & 0xfffffffffffffff0);
  uVar10 = 0;
  __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xe,0,0,0x11,0,0);
  local_c8 = lVar13;
  if ((uVar10 & 1) == 0) {
    FUN_1003298fc(lVar15,lVar18,lVar13);
  }
  else {
    uVar7 = 0;
    FUN_10004003c(0,&DAT_100a82c00,&PTR__OBJC_CLASS___NSHTTPURLResponse_100a658d0);
    __sScS10makeStream2of15bufferingPolicyScSyxG6stream_ScS12ContinuationVyx_G12continuationtxm_AG09BufferingE0Oyx__GtFZ
              (lVar15,lVar18,uVar7,lVar13,uVar7);
  }
  local_e0 = lVar15;
  lStack_d8 = lVar11;
  local_d0 = puVar5;
  (**(code **)(lVar11 + 0x10))(param_1 + *(int *)(puVar4 + 0x20),lVar15,puVar5);
  pcVar9 = *(code **)(lVar17 + 0x10);
  (*pcVar9)(param_1 + *(int *)(puVar4 + 0x24),lVar18,puVar6);
  local_100 = pcVar9;
  _swift_unownedRetainStrong();
  _swift_unownedRetainStrong();
  local_120 = *(undefined8 *)(unaff_x20 + _TtC9Alamofire7Request::underlyingQueue);
  _swift_release();
  lVar11 = local_b0;
  local_108 = local_b0 + 0xfU & 0xfffffffffffffff0;
  lVar13 = lVar18 - local_108;
  local_110 = lVar18;
  (*pcVar9)(lVar13,lVar18,puVar6);
  uVar16 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar10 = uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff);
  puVar4 = &DAT_1009b12c8;
  local_f8 = uVar10;
  _swift_allocObject(&DAT_1009b12c8,uVar10 + lVar11,uVar16 | 7);
  local_f0 = *(code **)(lVar17 + 0x20);
  local_e8 = lVar17;
  (*local_f0)(puVar4 + uVar10,lVar13,puVar6);
  puVar5 = &DAT_1009b12f0;
  _swift_allocObject(&DAT_1009b12f0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10032aab0;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  lVar11 = *(long *)(unaff_x20 + _TtC9Alamofire11DataRequest::dataMutableState);
  uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x10) + 0x10);
  local_118 = lVar18;
  _swift_retain(puVar4);
  _os_unfair_lock_lock(uVar14);
  _swift_beginAccess(lVar11 + 0x18,auStack_80,1,0);
  uVar7 = *(undefined8 *)(lVar11 + 0x28);
  uVar1 = *(undefined8 *)(lVar11 + 0x30);
  uVar12 = *(undefined8 *)(lVar11 + 0x38);
  *(undefined8 *)(lVar11 + 0x28) = local_120;
  *(code **)(lVar11 + 0x30) = FUN_10032aad4;
  *(undefined **)(lVar11 + 0x38) = puVar5;
  _swift_retain(puVar5);
  FUN_10028a014(uVar7,uVar1,uVar12);
  _os_unfair_lock_unlock(uVar14);
  _swift_release(puVar4);
  _swift_release();
  _swift_release(puVar5);
  lVar13 = local_110;
  _swift_unownedRetainStrong();
  pcVar9 = local_100;
  uVar10 = local_108;
  lVar11 = local_118;
  lVar13 = lVar13 - local_108;
  (*local_100)(lVar13,local_118,puVar6);
  (*pcVar9)(lVar13 - uVar10,lVar13,puVar6);
  uVar3 = local_f8;
  puVar4 = &DAT_1009b1318;
  _swift_allocObject(&DAT_1009b1318,local_f8 + local_b0,uVar16 | 7);
  (*local_f0)(puVar4 + uVar3,lVar13,puVar6);
  plVar8 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar7 = *(undefined8 *)(plVar8[2] + 0x10);
  _os_unfair_lock_lock(uVar7);
  lVar15 = *(long *)(*plVar8 + 0x60);
  _swift_beginAccess((long)plVar8 + lVar15,auStack_a0,0x21,0);
  FUN_1002d2f04(&local_81,(long)plVar8 + lVar15,FUN_10032aadc,puVar4);
  _swift_endAccess(auStack_a0);
  _os_unfair_lock_unlock(uVar7);
  if ((local_81 & 1) != 0) {
    __sScS12ContinuationV6finishyyF(puVar6);
  }
  _swift_release(puVar4);
  _swift_release();
  pcVar9 = *(code **)(local_e8 + 8);
  (*pcVar9)(lVar13 - uVar10,puVar6);
  _swift_unownedRelease();
  _swift_unownedRelease();
  (*pcVar9)(lVar11,puVar6);
  (**(code **)(lStack_d8 + 8))(local_e0,local_d0);
  (**(code **)(local_c0 + 8))(local_c8,local_b8);
  _swift_unownedRelease();
  return;
}

