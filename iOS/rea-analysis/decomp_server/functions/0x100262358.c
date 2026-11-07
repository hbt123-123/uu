// rea decompile_all
// name: FUN_100262358
// address: 0x100262358
// body: available
// range: 0x100262358-0x10026261b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100262358(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  long local_80 [4];
  
  lVar4 = 0;
  __s10Foundation3URLVMa();
  local_80[2] = *(long *)(lVar4 + -8);
  uVar9 = *(long *)(local_80[2] + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_80[1] = (long)local_80 - uVar9;
  lVar10 = local_80[1] - uVar9;
  lVar5 = 0;
  local_80[0] = lVar10;
  local_80[3] = lVar4;
  FUN_100275594();
  uVar9 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar17 = (undefined8 *)(lVar10 - uVar9);
  puVar11 = (undefined8 *)((long)puVar17 - uVar9);
  lVar16 = (long)puVar11 - uVar9;
  puVar6 = &DAT_100a81130;
  FUN_100004bb4(&DAT_100a81130,&DAT_100815248);
  lVar4 = _TtC4Moya8Endpoint::task;
  lVar10 = lVar16 - (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)(lVar10 + *(int *)(puVar6 + 0x30));
  FUN_100082394(param_1 + _TtC4Moya8Endpoint::task,lVar10,FUN_100275594);
  FUN_100082394(param_2 + lVar4,puVar1,FUN_100275594);
  lVar4 = lVar10;
  _swift_getEnumCaseMultiPayload(lVar10,lVar5);
  iVar3 = (int)lVar4;
  if (iVar3 == 8) {
    FUN_100082394(lVar10,puVar17,FUN_100275594);
    uVar13 = *puVar17;
    _swift_bridgeObjectRelease(puVar17[1]);
    puVar11 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,lVar5);
    if ((int)puVar11 == 8) {
      uVar14 = *puVar1;
      _swift_bridgeObjectRelease(puVar1[1]);
      goto LAB_10026258c;
    }
LAB_1002625c0:
    _swift_bridgeObjectRelease(uVar13);
  }
  else {
    if (iVar3 == 7) {
      FUN_100082394(lVar10,puVar11,FUN_100275594);
      uVar13 = *puVar11;
      puVar11 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar5);
      if ((int)puVar11 != 7) goto LAB_1002625c0;
      uVar14 = *puVar1;
LAB_10026258c:
      FUN_1000d27dc(lVar10,FUN_100275594);
      uVar8 = uVar13;
      FUN_10026261c(uVar13,uVar14);
      uVar15 = (uint)uVar8;
      _swift_bridgeObjectRelease(uVar13);
      _swift_bridgeObjectRelease(uVar14);
      goto LAB_1002625f8;
    }
    if (iVar3 == 6) {
      FUN_100082394(lVar10,lVar16,FUN_100275594);
      puVar11 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar5);
      lVar2 = local_80[3];
      lVar5 = local_80[2];
      lVar4 = local_80[0];
      if ((int)puVar11 == 6) {
        pcVar12 = *(code **)(local_80[2] + 0x20);
        (*pcVar12)(local_80[0],lVar16,local_80[3]);
        lVar16 = local_80[1];
        (*pcVar12)(local_80[1],puVar1,lVar2);
        lVar7 = lVar4;
        __s10Foundation3URLV2eeoiySbAC_ACtFZ(lVar4,lVar16);
        uVar15 = (uint)lVar7;
        pcVar12 = *(code **)(lVar5 + 8);
        (*pcVar12)(lVar16,lVar2);
        (*pcVar12)(lVar4,lVar2);
        FUN_1000d27dc(lVar10,FUN_100275594);
        goto LAB_1002625f8;
      }
      (**(code **)(local_80[2] + 8))(lVar16,local_80[3]);
    }
  }
  FUN_100040bb4(lVar10,&DAT_100a81130,&DAT_100815248);
  uVar15 = 1;
LAB_1002625f8:
  return uVar15 & 1;
}

