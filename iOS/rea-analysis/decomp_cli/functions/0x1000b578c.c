// rea decompile_all
// name: FUN_1000b578c
// address: 0x1000b578c
// body: available
// range: 0x1000b578c-0x1000b5887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000b578c(undefined *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x21;
  long lVar8;
  
  puVar3 = &DAT_100105178;
  FUN_10000eb08(&DAT_100105178,&BYTE_1000d6e30);
  lVar8 = *(long *)(puVar3 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = param_1;
  FUN_10000eba0(param_1,uVar1);
  puVar5 = puVar4;
  FUN_1000b5888();
  puVar6 = &DAT_1000fc130;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),&DAT_1000fc130,
             &DAT_1000fc130,puVar5,uVar1,uVar2);
  if (unaff_x21 == 0) {
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF();
    (**(code **)(lVar8 + 8))(&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),puVar3)
    ;
    FUN_100001428(param_1);
  }
  else {
    FUN_100001428(param_1);
    puVar6 = puVar4;
  }
  return puVar6;
}

