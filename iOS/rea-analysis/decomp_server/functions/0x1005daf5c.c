// rea decompile_all
// name: FUN_1005daf5c
// address: 0x1005daf5c
// body: available
// range: 0x1005daf5c-0x1005db06b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005daf5c(undefined *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined1 auVar8 [16];
  
  puVar2 = &DAT_100aae0f8;
  FUN_100004bb4(&DAT_100aae0f8,&DAT_10083f6f8);
  lVar7 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = *(undefined **)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = param_1;
  FUN_10003f030(param_1,puVar6);
  puVar4 = puVar3;
  FUN_1005dd0a4();
  puVar5 = &DAT_1009d9cf8;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&stack0xffffffffffffffb0 + -extraout_x8,&DAT_1009d9cf8,&DAT_1009d9cf8,puVar4,puVar6,
             uVar1);
  if (unaff_x21 == 0) {
    puVar6 = puVar2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    (**(code **)(lVar7 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar2);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
    puVar5 = puVar3;
  }
  auVar8._8_8_ = puVar6;
  auVar8._0_8_ = puVar5;
  return auVar8;
}

