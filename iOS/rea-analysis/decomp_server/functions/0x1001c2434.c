// rea decompile_all
// name: FUN_1001c2434
// address: 0x1001c2434
// body: available
// range: 0x1001c2434-0x1001c2523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c2434(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar6;
  
  puVar5 = &DAT_100a7d140;
  FUN_100004bb4(&DAT_100a7d140,&DAT_100812098);
  lVar6 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar2);
  FUN_1001c57fc();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (&stack0xffffffffffffffa0 + -extraout_x8,&DAT_1009a30b0,&DAT_1009a30b0,param_1,uVar2,
             uVar4);
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar1,uVar3);
  (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar5);
  return;
}

