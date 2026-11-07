// rea decompile_all
// name: FUN_100004c78
// address: 0x100004c78
// body: available
// range: 0x100004c78-0x100004fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100004e30) */
/* WARNING: Removing unreachable block (ram,0x000100004e78) */
/* WARNING: Removing unreachable block (ram,0x000100004f1c) */
/* WARNING: Removing unreachable block (ram,0x000100004f30) */
/* WARNING: Removing unreachable block (ram,0x000100004f34) */
/* WARNING: Removing unreachable block (ram,0x000100004f48) */
/* WARNING: Removing unreachable block (ram,0x000100004f50) */
/* WARNING: Removing unreachable block (ram,0x000100004f54) */
/* WARNING: Removing unreachable block (ram,0x000100004dc4) */

void FUN_100004c78(undefined8 param_1,long param_2)

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
  undefined8 *puVar11;
  undefined *apuStack_90 [4];
  long local_70;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100101b10;
  apuStack_90[2] = (undefined *)param_1;
  FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)apuStack_90 - extraout_x8;
  puVar2 = &DAT_100101b28;
  FUN_10000eb08(&DAT_100101b28,&DAT_1000cb710);
  lVar8 = *(long *)(puVar2 + -8);
  apuStack_90[3] = puVar2;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar10 - extraout_x8_00;
  lVar3 = 0;
  FUN_10000fb58();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar11 = (undefined8 *)(lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10000eba0(param_2,uVar6);
  FUN_10000fb6c();
  local_70 = lVar9;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar9,&DAT_1000f2d20,&DAT_1000f2d20,lVar4,uVar6,uVar1);
  puVar2 = apuStack_90[3];
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar5 = &local_51;
    puVar7 = apuStack_90[3];
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    *puVar11 = puVar5;
    puVar11[1] = puVar7;
    local_52 = 1;
    puVar5 = &local_52;
    puVar7 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar11[2] = puVar5;
    puVar11[3] = puVar7;
    local_53 = 2;
    puVar5 = &local_53;
    puVar7 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar11[4] = puVar5;
    puVar11[5] = puVar7;
    local_54 = 3;
    puVar5 = &local_54;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar5,puVar2);
    *(byte *)(puVar11 + 6) = (byte)puVar5 & 1;
    uVar6 = 0;
    __s10Foundation4DateVMa(0);
    local_55 = 4;
    puVar7 = &DAT_100101ac8;
    FUN_10000ec04(&DAT_100101ac8,PTR___s10Foundation4DateVMa_1000f07d0,
                  PTR___s10Foundation4DateVSeAAMc_1000f07e8);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (lVar10,uVar6,&local_55,puVar2,uVar6,puVar7);
    (**(code **)(lVar8 + 8))(local_70,puVar2);
    FUN_100010128(lVar10,(long)puVar11 + (long)*(int *)(lVar3 + 0x20),&DAT_100101b10,&DAT_1000cb700)
    ;
    FUN_10000fc0c(puVar11,apuStack_90[2],FUN_10000fb58);
    FUN_100001428(param_2);
    FUN_10000fc50(puVar11,FUN_10000fb58);
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

