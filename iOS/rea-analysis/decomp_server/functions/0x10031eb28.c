// rea decompile_all
// name: FUN_10031eb28
// address: 0x10031eb28
// body: available
// range: 0x10031eb28-0x10031eed7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010031eea4) */

void FUN_10031eb28(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  long local_90;
  undefined1 auStack_80 [31];
  byte local_61;
  
  _swift_unownedRetainStrong();
  _swift_unownedRetain();
  _swift_release();
  puVar2 = &DAT_100a85c58;
  FUN_100004bb4(&DAT_100a85c58,&DAT_10081a288);
  local_a0 = *(long *)(puVar2 + -8);
  lVar6 = (long)&local_c0 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar9 = *(code **)(local_a0 + 0x10);
  (*pcVar9)(lVar6,param_2,puVar2);
  _swift_unownedRetainStrong();
  _swift_unownedRetain();
  _swift_unownedRetain();
  _swift_release();
  local_98 = puVar2;
  (*pcVar9)(param_1,lVar6,puVar2);
  puVar2 = &DAT_100a85c60;
  FUN_100004bb4(&DAT_100a85c60,&DAT_10081a290);
  iVar1 = *(int *)(puVar2 + 0x1c);
  *(undefined8 *)(param_1 + iVar1) = 0;
  ((undefined8 *)(param_1 + iVar1))[1] = 0;
  puVar3 = &DAT_100a85c68;
  FUN_100004bb4(&DAT_100a85c68,&DAT_10081a298);
  local_90 = *(long *)(puVar3 + -8);
  lVar14 = lVar6 - (*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a85c70;
  FUN_100004bb4(&DAT_100a85c70,&DAT_10081a2a0);
  lVar13 = *(long *)(puVar4 + -8);
  lVar10 = *(long *)(lVar13 + 0x40);
  lVar15 = lVar14 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0;
  __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xe,0,0,0x11,0,0);
  local_a8 = lVar6;
  if ((uVar5 & 1) == 0) {
    FUN_100329658(lVar14,lVar15,lVar6);
  }
  else {
    __sScS10makeStream2of15bufferingPolicyScSyxG6stream_ScS12ContinuationVyx_G12continuationtxm_AG09BufferingE0Oyx__GtFZ
              (lVar14,lVar15,PTR___sSSN_1009957f8,lVar6,PTR___sSSN_1009957f8);
  }
  local_b0 = puVar3;
  (**(code **)(local_90 + 0x10))(param_1 + *(int *)(puVar2 + 0x20),lVar14,puVar3);
  pcVar9 = *(code **)(lVar13 + 0x10);
  (*pcVar9)(param_1 + *(int *)(puVar2 + 0x24),lVar15,puVar4);
  FUN_10031eed8(lVar15);
  _swift_unownedRetainStrong();
  uVar5 = lVar10 + 0xfU & 0xfffffffffffffff0;
  lVar7 = lVar15 - uVar5;
  local_b8 = lVar15;
  (*pcVar9)(lVar7,lVar15,puVar4);
  lVar6 = lVar7 - uVar5;
  local_c0 = lVar7;
  (*pcVar9)(lVar6,lVar7,puVar4);
  uVar5 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  puVar2 = &DAT_1009b12a0;
  _swift_allocObject(&DAT_1009b12a0,uVar12 + lVar10,uVar5 | 7);
  (**(code **)(lVar13 + 0x20))(puVar2 + uVar12,lVar7,puVar4);
  plVar8 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar11 = *(undefined8 *)(plVar8[2] + 0x10);
  _os_unfair_lock_lock(uVar11);
  lVar10 = *(long *)(*plVar8 + 0x60);
  _swift_beginAccess((long)plVar8 + lVar10,auStack_80,0x21,0);
  FUN_1002d2f04(&local_61,(long)plVar8 + lVar10,FUN_100329854,puVar2);
  _swift_endAccess(auStack_80);
  _os_unfair_lock_unlock(uVar11);
  if ((local_61 & 1) != 0) {
    __sScS12ContinuationV6finishyyF(puVar4);
  }
  _swift_release(puVar2);
  _swift_release();
  pcVar9 = *(code **)(lVar13 + 8);
  (*pcVar9)(lVar6,puVar4);
  _swift_unownedRelease();
  _swift_unownedRelease();
  (*pcVar9)(lVar15,puVar4);
  (**(code **)(local_90 + 8))(lVar14,local_b0);
  (**(code **)(local_a0 + 8))(local_a8,local_98);
  _swift_unownedRelease();
  return;
}

