// rea decompile_all
// name: FUN_10031dfc0
// address: 0x10031dfc0
// body: available
// range: 0x10031dfc0-0x10031e373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010031e340) */

void FUN_10031dfc0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  long lVar11;
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
  puVar2 = &DAT_100a85c18;
  FUN_100004bb4(&DAT_100a85c18,&DAT_10081a248);
  local_a0 = *(long *)(puVar2 + -8);
  lVar7 = (long)&local_c0 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar10 = *(code **)(local_a0 + 0x10);
  (*pcVar10)(lVar7,param_2,puVar2);
  _swift_unownedRetainStrong();
  _swift_unownedRetain();
  _swift_unownedRetain();
  _swift_release();
  local_98 = puVar2;
  (*pcVar10)(param_1,lVar7,puVar2);
  puVar2 = &DAT_100a85c20;
  FUN_100004bb4(&DAT_100a85c20,&DAT_10081a250);
  iVar1 = *(int *)(puVar2 + 0x1c);
  *(undefined8 *)(param_1 + iVar1) = 0;
  ((undefined8 *)(param_1 + iVar1))[1] = 0;
  puVar3 = &DAT_100a85c28;
  FUN_100004bb4(&DAT_100a85c28,&DAT_10081a258);
  local_90 = *(long *)(puVar3 + -8);
  lVar14 = lVar7 - (*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a85c30;
  FUN_100004bb4(&DAT_100a85c30,&DAT_10081a260);
  lVar11 = *(long *)(puVar4 + -8);
  lVar13 = *(long *)(lVar11 + 0x40);
  lVar15 = lVar14 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  uVar6 = 0;
  __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xe,0,0,0x11,0,0);
  local_a8 = lVar7;
  if ((uVar6 & 1) == 0) {
    FUN_100329228(lVar14,lVar15,lVar7);
  }
  else {
    uVar5 = 0;
    __s10Foundation10URLRequestVMa(0);
    __sScS10makeStream2of15bufferingPolicyScSyxG6stream_ScS12ContinuationVyx_G12continuationtxm_AG09BufferingE0Oyx__GtFZ
              (lVar14,lVar15,uVar5,lVar7,uVar5);
  }
  local_b0 = puVar3;
  (**(code **)(local_90 + 0x10))(param_1 + *(int *)(puVar2 + 0x20),lVar14,puVar3);
  pcVar10 = *(code **)(lVar11 + 0x10);
  (*pcVar10)(param_1 + *(int *)(puVar2 + 0x24),lVar15,puVar4);
  FUN_10031e374(lVar15);
  _swift_unownedRetainStrong();
  uVar6 = lVar13 + 0xfU & 0xfffffffffffffff0;
  lVar8 = lVar15 - uVar6;
  local_b8 = lVar15;
  (*pcVar10)(lVar8,lVar15,puVar4);
  lVar7 = lVar8 - uVar6;
  local_c0 = lVar8;
  (*pcVar10)(lVar7,lVar8,puVar4);
  uVar6 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  puVar2 = &DAT_1009b1250;
  _swift_allocObject(&DAT_1009b1250,uVar12 + lVar13,uVar6 | 7);
  (**(code **)(lVar11 + 0x20))(puVar2 + uVar12,lVar8,puVar4);
  plVar9 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar5 = *(undefined8 *)(plVar9[2] + 0x10);
  _os_unfair_lock_lock(uVar5);
  lVar13 = *(long *)(*plVar9 + 0x60);
  _swift_beginAccess((long)plVar9 + lVar13,auStack_80,0x21,0);
  FUN_1002d2f04(&local_61,(long)plVar9 + lVar13,FUN_100329424,puVar2);
  _swift_endAccess(auStack_80);
  _os_unfair_lock_unlock(uVar5);
  if ((local_61 & 1) != 0) {
    __sScS12ContinuationV6finishyyF(puVar4);
  }
  _swift_release(puVar2);
  _swift_release();
  pcVar10 = *(code **)(lVar11 + 8);
  (*pcVar10)(lVar7,puVar4);
  _swift_unownedRelease();
  _swift_unownedRelease();
  (*pcVar10)(lVar15,puVar4);
  (**(code **)(local_90 + 8))(lVar14,local_b0);
  (**(code **)(local_a0 + 8))(local_a8,local_98);
  _swift_unownedRelease();
  return;
}

