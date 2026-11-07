// rea decompile_all
// name: FUN_100011568
// address: 0x100011568
// body: available
// range: 0x100011568-0x1000116ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000116a8) */
/* WARNING: Removing unreachable block (ram,0x000100011630) */

undefined1 * FUN_100011568(long param_1)

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
  
  puVar2 = &DAT_100102a58;
  FUN_10000eb08(&DAT_100102a58,&DAT_1000cf358);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10000eba0(param_1,uVar1);
  FUN_100011528();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&stack0xffffffffffffffa0 + -extraout_x8,&DAT_1000f2610,&DAT_1000f2610,lVar3,uVar1,
             puVar4);
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar4 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(puVar4,puVar2);
    local_52 = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(&local_52,puVar2);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar2);
    FUN_100001428(param_1);
  }
  else {
    FUN_100001428(param_1);
  }
  return puVar4;
}

