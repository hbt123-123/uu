// rea decompile_all
// name: FUN_10031da80
// address: 0x10031da80
// body: available
// range: 0x10031da80-0x10031dfbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010031df88) */

void FUN_10031da80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long local_120;
  long local_118;
  ulong local_110;
  code *local_108;
  ulong local_100;
  code *local_f8;
  ulong local_f0;
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
  puVar4 = &DAT_100a85bf8;
  FUN_100004bb4(&DAT_100a85bf8,&DAT_10081a228);
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
  puVar4 = &DAT_100a85c00;
  FUN_100004bb4(&DAT_100a85c00,&DAT_10081a230);
  iVar2 = *(int *)(puVar4 + 0x1c);
  *(undefined8 *)(param_1 + iVar2) = 0;
  ((undefined8 *)(param_1 + iVar2))[1] = 0;
  puVar5 = &DAT_100a85c08;
  FUN_100004bb4(&DAT_100a85c08,&DAT_10081a238);
  lVar11 = *(long *)(puVar5 + -8);
  lVar15 = lVar13 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100a85c10;
  FUN_100004bb4(&DAT_100a85c10,&DAT_10081a240);
  lVar16 = *(long *)(puVar6 + -8);
  local_b0 = *(long *)(lVar16 + 0x40);
  lVar18 = lVar15 - (local_b0 + 0xfU & 0xfffffffffffffff0);
  uVar12 = 0;
  __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xe,0,0,0x11,0,0);
  local_c8 = lVar13;
  if ((uVar12 & 1) == 0) {
    FUN_100328f70(lVar15,lVar18,lVar13);
  }
  else {
    uVar7 = 0;
    FUN_10004003c(0,&DAT_100a84208,&PTR__OBJC_CLASS___NSProgress_100a659e0);
    __sScS10makeStream2of15bufferingPolicyScSyxG6stream_ScS12ContinuationVyx_G12continuationtxm_AG09BufferingE0Oyx__GtFZ
              (lVar15,lVar18,uVar7,lVar13,uVar7);
  }
  local_e0 = lVar15;
  lStack_d8 = lVar11;
  local_d0 = puVar5;
  (**(code **)(lVar11 + 0x10))(param_1 + *(int *)(puVar4 + 0x20),lVar15,puVar5);
  pcVar9 = *(code **)(lVar16 + 0x10);
  (*pcVar9)(param_1 + *(int *)(puVar4 + 0x24),lVar18,puVar6);
  local_108 = pcVar9;
  _swift_unownedRetainStrong();
  _swift_unownedRetainStrong();
  uVar8 = *(undefined8 *)(unaff_x20 + _TtC9Alamofire7Request::underlyingQueue);
  _swift_release();
  lVar11 = local_b0;
  local_110 = local_b0 + 0xfU & 0xfffffffffffffff0;
  lVar13 = lVar18 - local_110;
  local_118 = lVar18;
  (*pcVar9)(lVar13,lVar18,puVar6);
  local_f0 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar12 = local_f0 + 0x10 & (local_f0 ^ 0xffffffffffffffff);
  puVar4 = &DAT_1009b1200;
  local_100 = uVar12;
  _swift_allocObject(&DAT_1009b1200,uVar12 + lVar11,local_f0 | 7);
  local_f8 = *(code **)(lVar16 + 0x20);
  local_e8 = lVar16;
  (*local_f8)(puVar4 + uVar12,lVar13,puVar6);
  plVar10 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar14 = *(undefined8 *)(plVar10[2] + 0x10);
  local_120 = lVar18;
  _swift_retain(puVar4);
  _os_unfair_lock_lock(uVar14);
  lVar11 = (long)plVar10 + *(long *)(*plVar10 + 0x60);
  _swift_beginAccess(lVar11,auStack_80,1,0);
  uVar7 = *(undefined8 *)(lVar11 + 0x20);
  uVar1 = *(undefined8 *)(lVar11 + 0x28);
  uVar17 = *(undefined8 *)(lVar11 + 0x30);
  *(code **)(lVar11 + 0x20) = thunk_FUN_10032917c;
  *(undefined **)(lVar11 + 0x28) = puVar4;
  *(undefined8 *)(lVar11 + 0x30) = uVar8;
  _swift_retain(puVar4);
  FUN_10028abac(uVar7,uVar1,uVar17);
  _os_unfair_lock_unlock(uVar14);
  _swift_release();
  _swift_release_n(puVar4,2);
  lVar13 = local_118;
  _swift_unownedRetainStrong();
  pcVar9 = local_108;
  uVar12 = local_110;
  lVar11 = local_120;
  lVar13 = lVar13 - local_110;
  (*local_108)(lVar13,local_120,puVar6);
  (*pcVar9)(lVar13 - uVar12,lVar13,puVar6);
  uVar3 = local_100;
  puVar4 = &DAT_1009b1228;
  _swift_allocObject(&DAT_1009b1228,local_100 + local_b0,local_f0 | 7);
  (*local_f8)(puVar4 + uVar3,lVar13,puVar6);
  plVar10 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar7 = *(undefined8 *)(plVar10[2] + 0x10);
  _os_unfair_lock_lock(uVar7);
  lVar15 = *(long *)(*plVar10 + 0x60);
  _swift_beginAccess((long)plVar10 + lVar15,auStack_a0,0x21,0);
  FUN_1002d2f04(&local_81,(long)plVar10 + lVar15,thunk_FUN_1003291a0,puVar4);
  _swift_endAccess(auStack_a0);
  _os_unfair_lock_unlock(uVar7);
  if ((local_81 & 1) != 0) {
    __sScS12ContinuationV6finishyyF(puVar6);
  }
  _swift_release(puVar4);
  _swift_release();
  pcVar9 = *(code **)(local_e8 + 8);
  (*pcVar9)(lVar13 - uVar12,puVar6);
  _swift_unownedRelease();
  _swift_unownedRelease();
  (*pcVar9)(lVar11,puVar6);
  (**(code **)(lStack_d8 + 8))(local_e0,local_d0);
  (**(code **)(local_c0 + 8))(local_c8,local_b8);
  _swift_unownedRelease();
  return;
}

