// rea decompile_all
// name: FUN_10000d424
// address: 0x10000d424
// body: available
// range: 0x10000d424-0x10000d543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10000d424(long param_1,long param_2,undefined8 param_3,code *param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x21;
  undefined1 auVar6 [16];
  
  FUN_10000eb08(param_2,param_3);
  lVar5 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10000eba0(param_1,uVar1);
  lVar4 = lVar3;
  (*param_4)();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&stack0xffffffffffffffa0 + -extraout_x8,param_5,param_5,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    unaff_x21 = param_2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,param_2);
    FUN_100001428(param_1);
  }
  else {
    FUN_100001428(param_1);
    param_5 = lVar3;
  }
  auVar6._8_8_ = unaff_x21;
  auVar6._0_8_ = param_5;
  return auVar6;
}

