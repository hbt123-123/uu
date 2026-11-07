// rea decompile_all
// name: FUN_1003b9a58
// address: 0x1003b9a58
// body: available
// range: 0x1003b9a58-0x1003b9bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003b9b98) */
/* WARNING: Removing unreachable block (ram,0x0001003b9b20) */

undefined1 * FUN_1003b9a58(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100a8c0a0;
  FUN_100004bb4(&DAT_100a8c0a0,&DAT_100822208);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,uVar1);
  FUN_1003b9a18();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&stack0xffffffffffffffa0 + -extraout_x8,&DAT_1009b8c48,&DAT_1009b8c48,lVar3,uVar1,
             puVar4);
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar4 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(puVar4,puVar2);
    local_52 = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(&local_52,puVar2);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar2);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return puVar4;
}

