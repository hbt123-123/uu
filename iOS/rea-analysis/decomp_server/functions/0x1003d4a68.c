// rea decompile_all
// name: FUN_1003d4a68
// address: 0x1003d4a68
// body: available
// range: 0x1003d4a68-0x1003d4c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003d4bf8) */
/* WARNING: Removing unreachable block (ram,0x0001003d4b74) */

undefined1  [16] FUN_1003d4a68(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_60 [6];
  undefined1 local_5a;
  undefined1 local_59;
  undefined8 local_58;
  
  puVar3 = &DAT_100a8ca48;
  FUN_100004bb4(&DAT_100a8ca48,&DAT_100822f40);
  lVar8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = param_1;
  FUN_10003f030(param_1,uVar1);
  puVar5 = puVar4;
  FUN_1003d49e8();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_60 + -extraout_x8,&DAT_1009b9d18,&DAT_1009b9d18,puVar5,uVar1,uVar2);
  if (unaff_x21 == 0) {
    puVar6 = &DAT_100a8c9d0;
    FUN_100004bb4(&DAT_100a8c9d0,&DAT_1008229e0);
    local_59 = 0;
    puVar7 = &DAT_100a8ca50;
    FUN_1003d5308(&DAT_100a8ca50,FUN_1003d5378,PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_58,puVar6,&local_59,puVar3,puVar6,puVar7);
    local_5a = 1;
    puVar4 = &local_5a;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar4,puVar3);
    (**(code **)(lVar8 + 8))(auStack_60 + -extraout_x8,puVar3);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
    local_58 = uVar1;
  }
  auVar9._8_8_ = puVar4;
  auVar9._0_8_ = local_58;
  return auVar9;
}

