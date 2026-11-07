// rea decompile_all
// name: FUN_10019a73c
// address: 0x10019a73c
// body: available
// range: 0x10019a73c-0x10019aa47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019a73c(long *param_1,long param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long alStack_80 [2];
  long local_70 [2];
  
  lVar4 = 0;
  local_70[1] = param_2;
  FUN_1003a5b90();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar14 = (long)local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar14 - extraout_x8_00;
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_70[0] = *param_1;
  lVar8 = param_1[1];
  lVar16 = param_1[5];
  __s10Foundation3URLV6stringACSgSSh_tcfC(lVar12,param_1[2],param_1[3]);
  lVar7 = lVar12;
  (**(code **)(lVar15 + 0x30))(lVar12,1,lVar6);
  if ((int)lVar7 == 1) {
    FUN_100040bb4(lVar12,&DAT_100a766c8,&DAT_10080b1d0);
    FUN_100004bb4(&DAT_100a7c620,&DAT_1008103c8);
    _swift_allocObject();
    FUN_100615648(FUN_10019aa48,0);
    return;
  }
  (**(code **)(lVar15 + 0x20))(lVar13,lVar12,lVar6);
  uVar2 = (uint)(param_3 >> 0x20);
  uVar9 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar9 == 0) {
      uVar11 = param_3 >> 0x30 & 0xff;
    }
    else {
      iVar10 = (int)((ulong)local_70[1] >> 0x20);
      if (SBORROW4(iVar10,(int)local_70[1])) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10019aa48);
        (*pcVar3)();
      }
      uVar11 = (ulong)(iVar10 - (int)local_70[1]);
    }
joined_r0x00010019a8ec:
    if ((long)uVar11 <= lVar16) {
LAB_10019a950:
      puVar5 = &DAT_100a7c630;
      FUN_100004bb4(&DAT_100a7c630,&DAT_1008103d8);
      iVar10 = *(int *)(puVar5 + 0x30);
      iVar1 = *(int *)(puVar5 + 0x40);
      (**(code **)(lVar15 + 0x10))(lVar14,lVar13,lVar6);
      *(long *)(lVar14 + iVar10) = local_70[0];
      ((long *)(lVar14 + iVar10))[1] = lVar8;
      lVar7 = local_70[1];
      *(long *)(lVar14 + iVar1) = local_70[1];
      ((long *)(lVar14 + iVar1))[1] = param_3;
      _swift_storeEnumTagMultiPayload(lVar14,lVar4,0);
      _swift_bridgeObjectRetain(lVar8);
      FUN_100008184(lVar7,param_3);
      FUN_10019aeac();
      lVar8 = lVar7;
      FUN_10019aeec();
      *(long *)(lVar13 + -0x10) = lVar7;
      *(long *)(lVar13 + -8) = lVar8;
      FUN_10039e070(lVar14,&DAT_1009b6098,0,0,0,lVar4,&DAT_1009b6098,&PTR_PTR_100a8b1a0);
      FUN_10019af2c(lVar14);
      goto LAB_10019aa08;
    }
  }
  else {
    if (uVar9 == 2) {
      uVar11 = *(long *)(local_70[1] + 0x18) - *(long *)(local_70[1] + 0x10);
      if (SBORROW8(*(long *)(local_70[1] + 0x18),*(long *)(local_70[1] + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10019aa44);
        (*pcVar3)();
      }
      goto joined_r0x00010019a8ec;
    }
    if (-1 < lVar16) goto LAB_10019a950;
  }
  FUN_100004bb4(&DAT_100a7c620,&DAT_1008103c8);
  _swift_allocObject();
  FUN_100615648(FUN_10019aa60,0);
LAB_10019aa08:
  (**(code **)(lVar15 + 8))(lVar13,lVar6);
  return;
}

