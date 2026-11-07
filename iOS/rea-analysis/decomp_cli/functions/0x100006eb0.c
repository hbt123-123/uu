// rea decompile_all
// name: FUN_100006eb0
// address: 0x100006eb0
// body: available
// range: 0x100006eb0-0x10000704b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100006eb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100101b90;
  local_70 = param_3;
  FUN_10000eb08(&DAT_100101b90,&DAT_1000cb748);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar1);
  FUN_100010230();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            ((long)&local_70 - extraout_x8,&DAT_1000f2a70,&DAT_1000f2a70,param_1,uVar1,uVar2);
  local_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(param_2,&local_51,puVar3);
  if (unaff_x21 == 0) {
    local_68 = local_70;
    local_52 = 1;
    puVar4 = &DAT_100101ba0;
    FUN_10000eb08(&DAT_100101ba0,&DAT_1000cb750);
    puVar5 = &DAT_100101ba8;
    FUN_10001fe98(&DAT_100101ba8,&DAT_100101bb0,&TargetProtocolConformanceDescriptor_1000cbdf0,
                  PTR___sSayxGSEsSERzlMc_1000f0370);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_68,&local_52,puVar3,puVar4,puVar5);
    local_53 = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(param_4,&local_53,puVar3);
  }
  (**(code **)(lVar6 + 8))((long)&local_70 - extraout_x8,puVar3);
  return;
}

