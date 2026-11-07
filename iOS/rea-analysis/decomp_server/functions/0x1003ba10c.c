// rea decompile_all
// name: FUN_1003ba10c
// address: 0x1003ba10c
// body: available
// range: 0x1003ba10c-0x1003ba2d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003ba290) */
/* WARNING: Removing unreachable block (ram,0x0001003ba1d4) */

undefined1 * FUN_1003ba10c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined1 local_60 [15];
  undefined1 local_51;
  
  puVar2 = &DAT_100a8c078;
  FUN_100004bb4(&DAT_100a8c078,&DAT_1008221f8);
  lVar7 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,uVar1);
  FUN_1003ba08c();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_70 + -extraout_x8,&DAT_1009b8b28,&DAT_1009b8b28,lVar3,uVar1,puVar4);
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar4 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(puVar4,puVar2);
    puVar5 = &DAT_100a8be00;
    FUN_100004bb4(&DAT_100a8be00,&DAT_100820b98);
    local_61 = 1;
    puVar6 = &DAT_100a8c080;
    FUN_1003bd5e8(&DAT_100a8c080,FUN_1003bd664,PTR___sSSSesWP_100995828,
                  PTR___sSDyxq_GSesSeRzSeR_rlMc_100995790);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (local_60,puVar5,&local_61,puVar2,puVar5,puVar6);
    (**(code **)(lVar7 + 8))(auStack_70 + -extraout_x8,puVar2);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return puVar4;
}

