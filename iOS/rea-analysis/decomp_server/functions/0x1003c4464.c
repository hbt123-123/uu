// rea decompile_all
// name: FUN_1003c4464
// address: 0x1003c4464
// body: available
// range: 0x1003c4464-0x1003c476b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003c46d8) */
/* WARNING: Removing unreachable block (ram,0x0001003c462c) */

void FUN_1003c4464(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar10;
  long unaff_x21;
  long lVar11;
  undefined1 auStack_c0 [8];
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined1 *local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined1 local_52;
  undefined1 local_51;
  
  lVar6 = 0;
  local_98 = param_1;
  __s10Foundation4DateVMa();
  local_a0 = *(long *)(lVar6 + -8);
  local_80 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  lVar6 = 0;
  local_88 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLVMa();
  local_90 = *(long *)(lVar6 + -8);
  local_68 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_90 + 0x40));
  lVar9 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100a8c770;
  local_70 = lVar9;
  FUN_100004bb4(&DAT_100a8c770,&DAT_1008224e8);
  lVar11 = *(long *)(puVar7 + -8);
  local_78 = puVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_01;
  lVar8 = 0;
  FUN_1003c63e0();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar10 = lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar6 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1003d0db0();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar9,&DAT_1009b97b0,&DAT_1009b97b0,lVar6,uVar1,uVar2);
  lVar4 = local_80;
  puVar3 = local_88;
  lVar6 = local_90;
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar7 = &DAT_100a8c780;
    local_b8 = lVar8;
    local_b0 = lVar11;
    local_a8 = param_2;
    FUN_100005c90(&DAT_100a8c780,PTR___s10Foundation3URLVMa_100996188,
                  PTR___s10Foundation3URLVSeAAMc_1009961b0);
    puVar5 = local_78;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (local_70,local_68,&local_51,local_78,local_68,puVar7);
    (**(code **)(lVar6 + 0x20))(lVar10,local_70,local_68);
    local_52 = 1;
    puVar7 = &DAT_100a78008;
    FUN_100005c90(&DAT_100a78008,PTR___s10Foundation4DateVMa_100996208,
                  PTR___s10Foundation4DateVSeAAMc_100996228);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (puVar3,lVar4,&local_52,puVar5,lVar4,puVar7);
    (**(code **)(local_b0 + 8))(lVar9,puVar5);
    (**(code **)(local_a0 + 0x20))(lVar10 + *(int *)(local_b8 + 0x14),puVar3,lVar4);
    FUN_100082394(lVar10,local_98,FUN_1003c63e0);
    FUN_10003f094(local_a8);
    FUN_1000d27dc(lVar10,FUN_1003c63e0);
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

