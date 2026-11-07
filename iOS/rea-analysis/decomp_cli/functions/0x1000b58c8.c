// rea decompile_all
// name: FUN_1000b58c8
// address: 0x1000b58c8
// body: available
// range: 0x1000b58c8-0x1000b59cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b58c8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x21;
  long lVar7;
  
  puVar3 = &DAT_100105178;
  FUN_10000eb08(&DAT_100105178,&BYTE_1000d6e30);
  lVar7 = *(long *)(puVar3 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10000eba0(param_2,uVar1);
  FUN_1000b5888();
  puVar5 = &DAT_1000fc130;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&stack0xffffffffffffffa0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),&DAT_1000fc130,
             &DAT_1000fc130,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF();
    (**(code **)(lVar7 + 8))(&stack0xffffffffffffffa0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),puVar3)
    ;
    FUN_100001428(param_2);
    *param_1 = puVar5;
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

