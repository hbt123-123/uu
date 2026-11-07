// rea decompile_all
// name: FUN_1003b8b70
// address: 0x1003b8b70
// body: available
// range: 0x1003b8b70-0x1003b8d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003b8d14) */
/* WARNING: Removing unreachable block (ram,0x0001003b8cac) */
/* WARNING: Removing unreachable block (ram,0x0001003b8d28) */
/* WARNING: Removing unreachable block (ram,0x0001003b8d3c) */
/* WARNING: Removing unreachable block (ram,0x0001003b8c40) */

void FUN_1003b8b70(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long unaff_x21;
  long lVar10;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100a8c0d8;
  FUN_100004bb4(&DAT_100a8c0d8,&DAT_100822228);
  lVar10 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1003b8acc();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_80 - extraout_x8,&DAT_1009b8e88,&DAT_1009b8e88,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar5 = &local_51;
    puVar8 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_52 = 1;
    puVar6 = &local_52;
    puVar9 = puVar3;
    local_68 = puVar8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_53 = 2;
    puVar7 = &local_53;
    local_78 = puVar6;
    local_70 = puVar9;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int64VAFm_xtKF(puVar7,puVar3);
    local_54 = 3;
    puVar6 = &local_54;
    local_80 = puVar7;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int64VAFm_xtKF(puVar6,puVar3);
    (**(code **)(lVar10 + 8))((long)&local_80 - extraout_x8,puVar3);
    FUN_10003f094(param_2);
    *param_1 = puVar5;
    param_1[1] = local_68;
    param_1[2] = local_78;
    param_1[3] = local_70;
    param_1[4] = local_80;
    param_1[5] = puVar6;
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

