// rea decompile_all
// name: FUN_1003c4ab4
// address: 0x1003c4ab4
// body: available
// range: 0x1003c4ab4-0x1003c4df7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003c4d50) */
/* WARNING: Removing unreachable block (ram,0x0001003c4ca0) */
/* WARNING: Removing unreachable block (ram,0x0001003c4d00) */
/* WARNING: Removing unreachable block (ram,0x0001003c4d68) */
/* WARNING: Removing unreachable block (ram,0x0001003c4d6c) */
/* WARNING: Removing unreachable block (ram,0x0001003c4d7c) */
/* WARNING: Removing unreachable block (ram,0x0001003c4d90) */
/* WARNING: Removing unreachable block (ram,0x0001003c4d94) */
/* WARNING: Removing unreachable block (ram,0x0001003c4c04) */

void FUN_1003c4ab4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined *local_a0 [3];
  long local_88;
  long lStack_80;
  long local_78;
  undefined *local_70;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  lVar4 = 0;
  local_a0[2] = (undefined *)param_1;
  __s10Foundation4DateVMa();
  local_88 = *(long *)(lVar4 + -8);
  lStack_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_88 + 0x40));
  lVar12 = (long)local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a8c8b0;
  FUN_100004bb4(&DAT_100a8c8b0,&DAT_100822850);
  lVar9 = *(long *)(puVar5 + -8);
  local_70 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar12 - extraout_x8_00;
  lVar6 = 0;
  FUN_1003d0d4c();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar10 = (undefined8 *)(lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10003f030(param_2,uVar2);
  FUN_1003d1c5c();
  local_78 = lVar11;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar11,&DAT_1009b98d0,&DAT_1009b98d0,lVar4,uVar2,uVar3);
  lVar11 = lStack_80;
  lVar4 = local_88;
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar7 = &local_51;
    puVar8 = local_70;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    *puVar10 = puVar7;
    puVar10[1] = puVar8;
    local_52 = 1;
    puVar5 = &DAT_100a78008;
    local_a0[1] = puVar8;
    FUN_100005c90(&DAT_100a78008,PTR___s10Foundation4DateVMa_100996208,
                  PTR___s10Foundation4DateVSeAAMc_100996228);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (lVar12,lVar11,&local_52,local_70,lVar11,puVar5);
    (**(code **)(lVar4 + 0x20))((long)puVar10 + (long)*(int *)(lVar6 + 0x14),lVar12,lVar11);
    local_53 = 2;
    puVar7 = &local_53;
    puVar5 = local_70;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar1 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar6 + 0x18));
    *puVar1 = puVar7;
    puVar1[1] = puVar5;
    local_54 = 3;
    puVar7 = &local_54;
    puVar5 = local_70;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_a0[0] = puVar5;
    (**(code **)(lVar9 + 8))(local_78,local_70);
    puVar5 = local_a0[0];
    puVar1 = (undefined8 *)((long)puVar10 + (long)*(int *)(lVar6 + 0x1c));
    *puVar1 = puVar7;
    puVar1[1] = puVar5;
    FUN_100082394(puVar10,local_a0[2],FUN_1003d0d4c);
    FUN_10003f094(param_2);
    FUN_1000d27dc(puVar10,FUN_1003d0d4c);
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

