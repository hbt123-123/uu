// rea decompile_all
// name: FUN_1000ebc90
// address: 0x1000ebc90
// body: available
// range: 0x1000ebc90-0x1000ec193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000ec138) */
/* WARNING: Removing unreachable block (ram,0x0001000ebfc8) */
/* WARNING: Removing unreachable block (ram,0x0001000ebeac) */
/* WARNING: Removing unreachable block (ram,0x0001000ebe6c) */
/* WARNING: Removing unreachable block (ram,0x0001000ebebc) */
/* WARNING: Removing unreachable block (ram,0x0001000ebed0) */
/* WARNING: Removing unreachable block (ram,0x0001000ebf48) */
/* WARNING: Removing unreachable block (ram,0x0001000ec03c) */
/* WARNING: Removing unreachable block (ram,0x0001000ec054) */
/* WARNING: Removing unreachable block (ram,0x0001000ec058) */
/* WARNING: Removing unreachable block (ram,0x0001000ec05c) */
/* WARNING: Removing unreachable block (ram,0x0001000ec0ac) */
/* WARNING: Removing unreachable block (ram,0x0001000ec084) */
/* WARNING: Removing unreachable block (ram,0x0001000ec088) */
/* WARNING: Removing unreachable block (ram,0x0001000ec0a8) */
/* WARNING: Removing unreachable block (ram,0x0001000ec0b8) */
/* WARNING: Removing unreachable block (ram,0x0001000ec0bc) */
/* WARNING: Removing unreachable block (ram,0x0001000ec0c8) */
/* WARNING: Removing unreachable block (ram,0x0001000ebe04) */

void FUN_1000ebc90(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar11;
  long extraout_x12;
  long unaff_x21;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *local_b0 [3];
  long local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  lVar5 = 0;
  local_b0[2] = (undefined8 *)param_1;
  __s10Foundation4DateVMa();
  local_90 = *(long *)(lVar5 + -8);
  local_88 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_90 + 0x40));
  lVar13 = (long)local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar13;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = lVar13 - extraout_x12;
  puVar6 = &DAT_100a77fe0;
  FUN_100004bb4(&DAT_100a77fe0,&DAT_10080d078);
  lVar12 = *(long *)(puVar6 + -8);
  local_80 = puVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar13 - extraout_x8_00;
  lVar7 = 0;
  FUN_1000eb43c();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1000ec6dc();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar14,&DAT_10099c378,&DAT_10099c378,lVar5,uVar1,uVar2);
  puVar6 = local_80;
  lVar5 = local_88;
  if (unaff_x21 == 0) {
    local_58 = 0;
    puVar8 = &local_58;
    puVar9 = local_80;
    local_b0[1] = (undefined8 *)(lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar3 = local_b0[1];
    *local_b0[1] = puVar8;
    puVar3[1] = puVar9;
    local_58 = 1;
    puVar8 = &local_58;
    puVar9 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar3[2] = puVar8;
    puVar3[3] = puVar9;
    local_58 = 2;
    puVar8 = &local_58;
    puVar9 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar3[4] = puVar8;
    puVar3[5] = puVar9;
    puVar9 = &DAT_100a77ff0;
    FUN_100004bb4(&DAT_100a77ff0,&DAT_10080d080);
    local_61 = 3;
    puVar10 = &DAT_100a77ff8;
    FUN_1000ec7e0(&DAT_100a77ff8,FUN_1000ec71c,PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_58,puVar9,&local_61,puVar6,puVar9,puVar10);
    puVar3[6] = CONCAT71(uStack_57,local_58);
    local_58 = 4;
    puVar9 = &DAT_100a78008;
    FUN_1000ec890(&DAT_100a78008,PTR___s10Foundation4DateVSeAAMc_100996228);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (lVar13,lVar5,&local_58,puVar6,lVar5,puVar9);
    pcVar11 = *(code **)(local_90 + 0x20);
    (*pcVar11)((long)local_b0[1] + (long)*(int *)(lVar7 + 0x20),lVar13,lVar5);
    lVar4 = local_98;
    local_58 = 5;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (local_98,lVar5,&local_58,puVar6,lVar5,puVar9);
    lVar13 = (long)local_b0[1] + (long)*(int *)(lVar7 + 0x24);
    (*pcVar11)(lVar13,lVar4,lVar5);
    local_61 = 6;
    FUN_1000ec75c();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_58,&DAT_10099c408,&local_61,puVar6,&DAT_10099c408,lVar13);
    (**(code **)(lVar12 + 8))(lVar14,puVar6);
    puVar3 = local_b0[1];
    *(undefined1 *)((long)local_b0[1] + (long)*(int *)(lVar7 + 0x28)) = local_58;
    FUN_1000ec79c(local_b0[1],local_b0[2]);
    FUN_10003f094(param_2);
    FUN_1000e3550(puVar3);
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

