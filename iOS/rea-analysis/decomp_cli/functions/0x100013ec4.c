// rea decompile_all
// name: FUN_100013ec4
// address: 0x100013ec4
// body: available
// range: 0x100013ec4-0x10001402b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100013f90) */

void FUN_100013ec4(long param_1,long param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_70 [8];
  long local_68;
  undefined1 local_52;
  undefined1 local_51;
  
  FUN_10000eb08(param_2,param_3);
  lVar4 = *(long *)(param_2 + -8);
  local_68 = param_2;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10000eba0(param_1,uVar1);
  (*param_4)();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_70 + -extraout_x8,param_5,param_5,lVar3,uVar1,uVar2);
  lVar3 = local_68;
  if (unaff_x21 == 0) {
    local_51 = 0;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(&local_51,local_68);
    local_52 = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(&local_52,lVar3);
    (**(code **)(lVar4 + 8))(auStack_70 + -extraout_x8,lVar3);
    FUN_100001428(param_1);
  }
  else {
    FUN_100001428(param_1);
  }
  return;
}

