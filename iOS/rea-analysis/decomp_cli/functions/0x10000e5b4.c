// rea decompile_all
// name: FUN_10000e5b4
// address: 0x10000e5b4
// body: available
// range: 0x10000e5b4-0x10000e993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010000e838) */
/* WARNING: Removing unreachable block (ram,0x00010000e7ac) */
/* WARNING: Removing unreachable block (ram,0x00010000e8dc) */
/* WARNING: Removing unreachable block (ram,0x00010000e8f4) */
/* WARNING: Removing unreachable block (ram,0x00010000e908) */
/* WARNING: Removing unreachable block (ram,0x00010000e910) */
/* WARNING: Removing unreachable block (ram,0x00010000e914) */
/* WARNING: Removing unreachable block (ram,0x00010000e748) */

void FUN_10000e5b4(undefined8 param_1,long param_2)

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
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x21;
  undefined8 *puVar10;
  long lVar11;
  undefined *apuStack_a0 [4];
  long local_80;
  long local_78;
  undefined *local_70;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100101b58;
  apuStack_a0[3] = (undefined *)param_1;
  FUN_10000eb08(&DAT_100101b58,&DAT_1000cb730);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100101b10;
  local_80 = (long)apuStack_a0 - extraout_x8;
  FUN_10000eb08(&DAT_100101b10,&DAT_1000cb700);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = ((long)apuStack_a0 - extraout_x8) - extraout_x8_00;
  puVar2 = &DAT_100101dc8;
  local_78 = lVar9;
  FUN_10000eb08(&DAT_100101dc8,&DAT_1000cb870);
  lVar11 = *(long *)(puVar2 + -8);
  local_70 = puVar2;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_01;
  lVar3 = 0;
  FUN_1000143d4();
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar10 = (undefined8 *)(lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10000eba0(param_2,uVar6);
  FUN_100014418();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar9,&DAT_1000f1b60,&DAT_1000f1b60,lVar4,uVar6,uVar1);
  puVar2 = local_70;
  lVar4 = local_78;
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar5 = &local_51;
    puVar8 = local_70;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    *puVar10 = puVar5;
    puVar10[1] = puVar8;
    local_52 = 1;
    puVar5 = &local_52;
    puVar7 = puVar2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar10[2] = puVar5;
    puVar10[3] = puVar7;
    uVar6 = 0;
    __s10Foundation4DateVMa(0);
    local_53 = 2;
    puVar7 = &DAT_100101ac8;
    FUN_10000ec04(&DAT_100101ac8,PTR___s10Foundation4DateVMa_1000f07d0,
                  PTR___s10Foundation4DateVSeAAMc_1000f07e8);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (lVar4,uVar6,&local_53,puVar2,uVar6,puVar7);
    apuStack_a0[1] = puVar8;
    FUN_100010128(lVar4,(long)puVar10 + (long)*(int *)(lVar3 + 0x18),&DAT_100101b10,&DAT_1000cb700);
    uVar6 = 0;
    FUN_10000fbb8(0);
    local_54 = 3;
    puVar7 = &DAT_100101b88;
    FUN_10000ec04(&DAT_100101b88,FUN_10000fbb8,&TargetProtocolConformanceDescriptor_1000cbc38);
    lVar4 = local_80;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (local_80,uVar6,&local_54,puVar2,uVar6,puVar7);
    (**(code **)(lVar11 + 8))(lVar9,puVar2);
    FUN_100010128(lVar4,(long)puVar10 + (long)*(int *)(lVar3 + 0x1c),&DAT_100101b58,&DAT_1000cb730);
    FUN_10000fc0c(puVar10,apuStack_a0[3],FUN_1000143d4);
    FUN_100001428(param_2);
    FUN_10000fc50(puVar10,FUN_1000143d4);
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

