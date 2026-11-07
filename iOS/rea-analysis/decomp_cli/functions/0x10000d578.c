// rea decompile_all
// name: FUN_10000d578
// address: 0x10000d578
// body: available
// range: 0x10000d578-0x10000d6a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010000d644) */

void FUN_10000d578(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined8 *local_68;
  
  local_68 = param_1;
  FUN_10000eb08(param_5,param_6);
  lVar5 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  FUN_10000eba0(param_2,uVar1);
  (*param_7)();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_70 + -extraout_x8,param_8,param_8,lVar4,uVar1,uVar2);
  puVar3 = local_68;
  if (unaff_x21 == 0) {
    lVar4 = param_5;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,param_5);
    FUN_100001428(param_2);
    *puVar3 = param_8;
    puVar3[1] = lVar4;
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

