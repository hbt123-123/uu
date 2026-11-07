// rea decompile_all
// name: FUN_10019f318
// address: 0x10019f318
// body: available
// range: 0x10019f318-0x10019f507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019f318(long param_1,ulong param_2,ulong param_3,ulong param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  long lVar7;
  ulong local_70;
  undefined4 local_64;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar5 = &DAT_100a7c8b0;
  local_70 = param_4;
  local_64 = param_5;
  FUN_100004bb4(&DAT_100a7c8b0,&DAT_100810fd8);
  lVar7 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&local_70 - extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1001a0f9c();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar6,&DAT_1009a1de8,&DAT_1009a1de8,param_1,uVar1,uVar2);
  local_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(param_2,&local_51,puVar5);
  uVar4 = local_64;
  uVar3 = local_70;
  if (unaff_x21 == 0) {
    local_52 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(param_2 >> 0x20,&local_52,puVar5);
    local_53 = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(param_3,&local_53,puVar5);
    local_54 = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(param_3 >> 0x20,&local_54,puVar5);
    local_55 = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(uVar3,&local_55,puVar5);
    local_56 = 5;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(uVar3 >> 0x20,&local_56,puVar5);
    local_57 = 6;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(uVar4,&local_57,puVar5);
    (**(code **)(lVar7 + 8))(lVar6,puVar5);
  }
  else {
    (**(code **)(lVar7 + 8))(lVar6,puVar5);
  }
  return;
}

