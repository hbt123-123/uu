// rea decompile_all
// name: FUN_10000adac
// address: 0x10000adac
// body: available
// range: 0x10000adac-0x10000b0cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010000afb0) */
/* WARNING: Removing unreachable block (ram,0x00010000af6c) */
/* WARNING: Removing unreachable block (ram,0x00010000b028) */
/* WARNING: Removing unreachable block (ram,0x00010000b040) */
/* WARNING: Removing unreachable block (ram,0x00010000b044) */
/* WARNING: Removing unreachable block (ram,0x00010000b058) */
/* WARNING: Removing unreachable block (ram,0x00010000b060) */
/* WARNING: Removing unreachable block (ram,0x00010000b064) */
/* WARNING: Removing unreachable block (ram,0x00010000af04) */

void FUN_10000adac(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *apuStack_90 [3];
  long local_78;
  undefined *local_70;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100101b10;
  apuStack_90[2] = (undefined *)param_1;
  FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100101cb8;
  local_78 = (long)apuStack_90 - extraout_x8;
  FUN_10000eb08(&DAT_100101cb8,&DAT_1000cb7d8);
  lVar10 = *(long *)(puVar2 + -8);
  local_70 = puVar2;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = ((long)apuStack_90 - extraout_x8) - extraout_x8_00;
  lVar3 = 0;
  FUN_100012268();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar11 = (undefined8 *)(lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10000eba0(param_2,uVar6);
  FUN_10001227c();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar9,&DAT_1000f2340,&DAT_1000f2340,lVar4,uVar6,uVar1);
  puVar2 = local_70;
  lVar4 = local_78;
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar5 = &local_51;
    puVar7 = local_70;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    *puVar11 = puVar5;
    puVar11[1] = puVar7;
    local_52 = 1;
    puVar5 = &local_52;
    puVar8 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar11[2] = puVar5;
    puVar11[3] = puVar8;
    local_53 = 2;
    puVar5 = &local_53;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar11[4] = puVar5;
    puVar11[5] = puVar2;
    uVar6 = 0;
    apuStack_90[1] = puVar7;
    __s10Foundation4DateVMa(0);
    local_54 = 3;
    puVar2 = &DAT_100101ac8;
    FUN_10000ec04(&DAT_100101ac8,PTR___s10Foundation4DateVMa_1000f07d0,
                  PTR___s10Foundation4DateVSeAAMc_1000f07e8);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (lVar4,uVar6,&local_54,local_70,uVar6,puVar2);
    (**(code **)(lVar10 + 8))(lVar9,local_70);
    FUN_100010128(lVar4,(long)puVar11 + (long)*(int *)(lVar3 + 0x1c),&DAT_100101b10,&DAT_1000cb700);
    FUN_10000fc0c(puVar11,apuStack_90[2],FUN_100012268);
    FUN_100001428(param_2);
    FUN_10000fc50(puVar11,FUN_100012268);
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

