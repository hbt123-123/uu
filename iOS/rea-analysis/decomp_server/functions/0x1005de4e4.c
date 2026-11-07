// rea decompile_all
// name: FUN_1005de4e4
// address: 0x1005de4e4
// body: available
// range: 0x1005de4e4-0x1005de69b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005de644) */
/* WARNING: Removing unreachable block (ram,0x0001005de5dc) */

void FUN_1005de4e4(undefined8 *param_1,long param_2)

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
  undefined1 auStack_70 [8];
  undefined1 *local_68;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100aae248;
  FUN_100004bb4(&DAT_100aae248,&DAT_100840428);
  lVar10 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1005de390();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_70 + -extraout_x8,&DAT_1009d9998,&DAT_1009d9998,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar5 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar5,puVar3);
    local_52 = 1;
    puVar6 = &local_52;
    puVar8 = puVar3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_53 = 2;
    puVar7 = &local_53;
    puVar9 = puVar3;
    local_68 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    (**(code **)(lVar10 + 8))(auStack_70 + -extraout_x8,puVar3);
    FUN_10003f094(param_2);
    *param_1 = puVar5;
    param_1[1] = local_68;
    param_1[2] = puVar8;
    param_1[3] = puVar7;
    param_1[4] = puVar9;
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

