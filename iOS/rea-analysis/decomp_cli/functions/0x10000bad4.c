// rea decompile_all
// name: FUN_10000bad4
// address: 0x10000bad4
// body: available
// range: 0x10000bad4-0x10000bec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010000bdac) */
/* WARNING: Removing unreachable block (ram,0x00010000be3c) */
/* WARNING: Removing unreachable block (ram,0x00010000bd2c) */
/* WARNING: Removing unreachable block (ram,0x00010000bc8c) */
/* WARNING: Removing unreachable block (ram,0x00010000bcd8) */
/* WARNING: Removing unreachable block (ram,0x00010000bd78) */
/* WARNING: Removing unreachable block (ram,0x00010000bd98) */
/* WARNING: Removing unreachable block (ram,0x00010000bd9c) */
/* WARNING: Removing unreachable block (ram,0x00010000bdc0) */
/* WARNING: Removing unreachable block (ram,0x00010000bdcc) */
/* WARNING: Removing unreachable block (ram,0x00010000bdb0) */
/* WARNING: Removing unreachable block (ram,0x00010000bdbc) */
/* WARNING: Removing unreachable block (ram,0x00010000bdd0) */
/* WARNING: Removing unreachable block (ram,0x00010000bdd4) */
/* WARNING: Removing unreachable block (ram,0x00010000bc20) */

void FUN_10000bad4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long local_80;
  undefined *local_78;
  long local_70;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100101b10;
  local_80 = param_1;
  FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_80 - extraout_x8;
  puVar2 = &DAT_100101cf0;
  FUN_10000eb08(&DAT_100101cf0,&DAT_1000cb7f8);
  lVar8 = *(long *)(puVar2 + -8);
  local_78 = puVar2;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar10 - extraout_x8_00;
  lVar3 = 0;
  FUN_10001291c();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  plVar11 = (long *)(lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10000eba0(param_2,uVar6);
  FUN_100012930();
  local_70 = lVar9;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar9,&DAT_1000f2190,&DAT_1000f2190,lVar4,uVar6,uVar1);
  puVar2 = local_78;
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar5 = &local_51;
    puVar7 = local_78;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    *plVar11 = (long)puVar5;
    plVar11[1] = (long)puVar7;
    local_52 = 1;
    puVar5 = &local_52;
    puVar7 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    plVar11[2] = (long)puVar5;
    plVar11[3] = (long)puVar7;
    local_53 = 2;
    puVar5 = &local_53;
    puVar7 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    plVar11[4] = (long)puVar5;
    plVar11[5] = (long)puVar7;
    local_54 = 3;
    puVar5 = &local_54;
    puVar7 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    plVar11[6] = (long)puVar5;
    plVar11[7] = (long)puVar7;
    local_55 = 4;
    puVar5 = &local_55;
    puVar7 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    plVar11[8] = (long)puVar5;
    plVar11[9] = (long)puVar7;
    uVar6 = 0;
    __s10Foundation4DateVMa(0);
    local_56 = 5;
    puVar7 = &DAT_100101ac8;
    FUN_10000ec04(&DAT_100101ac8,PTR___s10Foundation4DateVMa_1000f07d0,
                  PTR___s10Foundation4DateVSeAAMc_1000f07e8);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (lVar10,uVar6,&local_56,puVar2,uVar6,puVar7);
    (**(code **)(lVar8 + 8))(local_70,puVar2);
    FUN_100010128(lVar10,(long)plVar11 + (long)*(int *)(lVar3 + 0x24),&DAT_100101b10,&DAT_1000cb700)
    ;
    FUN_10000fc0c(plVar11,local_80,FUN_10001291c);
    FUN_100001428(param_2);
    FUN_10000fc50(plVar11,FUN_10001291c);
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

