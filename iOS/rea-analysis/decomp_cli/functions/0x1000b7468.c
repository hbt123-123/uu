// rea decompile_all
// name: FUN_1000b7468
// address: 0x1000b7468
// body: available
// range: 0x1000b7468-0x1000b75af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b7468(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x21;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_1001051d0;
  local_68 = param_4;
  FUN_10000eb08(&DAT_1001051d0,&BYTE_1000d6e60);
  lVar5 = *(long *)(puVar3 + -8);
  puVar6 = auStack_70 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar1);
  FUN_1000bc2f4();
  puVar4 = &DAT_1000fbf80;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar6,&DAT_1000fbf80,&DAT_1000fbf80,param_1,uVar1,uVar2);
  local_52 = 0;
  local_51 = param_2;
  FUN_1000bc334();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&local_51,&local_52,puVar3,&DAT_1000fb9f0,puVar4);
  if (unaff_x21 == 0) {
    local_53 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(param_3,local_68,&local_53,puVar3);
    (**(code **)(lVar5 + 8))(puVar6,puVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar6,puVar3);
  }
  return;
}

