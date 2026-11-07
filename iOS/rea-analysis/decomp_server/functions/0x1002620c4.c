// rea decompile_all
// name: FUN_1002620c4
// address: 0x1002620c4
// body: available
// range: 0x1002620c4-0x100262353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100262280) */

void FUN_1002620c4(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 local_70 [2];
  
  puVar2 = &DAT_100a81018;
  local_70[0] = param_1;
  FUN_100004bb4(&DAT_100a81018,&DAT_100815150);
  lVar10 = (long)local_70 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  lVar14 = *(long *)(lVar3 + -8);
  lVar11 = lVar10 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar4 + -8);
  lVar8 = lVar11 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_100275594();
  puVar12 = (undefined8 *)
            (lVar8 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_100082394(unaff_x20 + _TtC4Moya8Endpoint::task,puVar12,FUN_100275594);
  puVar6 = puVar12;
  _swift_getEnumCaseMultiPayload(puVar12,lVar5);
  iVar1 = (int)puVar6;
  if (iVar1 == 8) {
    uVar9 = *puVar12;
    _swift_bridgeObjectRelease(puVar12[1]);
  }
  else {
    if (iVar1 != 7) {
      if (iVar1 == 6) {
        (**(code **)(lVar7 + 0x20))(lVar8,puVar12,lVar4);
        puVar2 = &DAT_100a81028;
        FUN_100005c90(&DAT_100a81028,PTR___s10Foundation3URLVMa_100996188,
                      PTR___s10Foundation3URLVSHAAMc_1009961a0);
        uVar13 = local_70[0];
        __sSH4hash4intoys6HasherVz_tFTj(local_70[0],lVar4,puVar2);
        (**(code **)(lVar7 + 8))(lVar8,lVar4);
      }
      else {
        FUN_1000d27dc(puVar12,FUN_100275594);
        uVar13 = local_70[0];
      }
      goto LAB_10026226c;
    }
    uVar9 = *puVar12;
  }
  uVar13 = local_70[0];
  FUN_1002632d8(local_70[0],uVar9);
  _swift_bridgeObjectRelease(uVar9);
LAB_10026226c:
  FUN_10026162c(lVar10);
  (**(code **)(lVar14 + 0x38))(lVar10,0,1,lVar3);
  (**(code **)(lVar14 + 0x20))(lVar11,lVar10,lVar3);
  puVar2 = &DAT_100a81020;
  FUN_100005c90(&DAT_100a81020,PTR___s10Foundation10URLRequestVMa_1009960c0,
                PTR___s10Foundation10URLRequestVSHAAMc_1009960d0);
  __sSH4hash4intoys6HasherVz_tFTj(uVar13,lVar3,puVar2);
  (**(code **)(lVar14 + 8))(lVar11,lVar3);
  return;
}

