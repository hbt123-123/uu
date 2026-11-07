// rea decompile_all
// name: FUN_100346d40
// address: 0x100346d40
// body: available
// range: 0x100346d40-0x100346dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100346d40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = &DAT_100a87208;
  FUN_100004bb4(&DAT_100a87208,&DAT_10081b208);
  lVar5 = *(long *)(puVar3 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_100347bc4();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),&DAT_1009b3a10,
             &DAT_1009b3a10,param_1,uVar1,uVar2);
  (**(code **)(lVar5 + 8))(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),puVar3);
  return;
}

