// rea decompile_all
// name: FUN_10000f9fc
// address: 0x10000f9fc
// body: available
// range: 0x10000f9fc-0x10000fb57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010000faec) */

undefined1 * FUN_10000f9fc(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100102ab8;
  FUN_10000eb08(&DAT_100102ab8,&DAT_1000cf398);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = param_1;
  FUN_10000eba0(param_1,uVar1);
  puVar5 = puVar4;
  FUN_10000f9bc();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&stack0xffffffffffffffa0 + -extraout_x8,&DAT_1000f2db0,&DAT_1000f2db0,puVar5,uVar1,
             uVar2);
  if (unaff_x21 == 0) {
    local_51 = 0;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_51,puVar3);
    local_52 = 1;
    puVar4 = &local_52;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(puVar4,puVar3);
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar3);
    FUN_100001428(param_1);
  }
  else {
    FUN_100001428(param_1);
  }
  return puVar4;
}

