// rea decompile_all
// name: FUN_1005f4558
// address: 0x1005f4558
// body: available
// range: 0x1005f4558-0x1005f46df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005f4558(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x21;
  undefined8 local_80;
  undefined8 local_68;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_52;
  undefined1 local_51;
  
  local_80 = param_3;
  FUN_100004bb4(param_4,param_5);
  lVar5 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  (*param_6)();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            ((long)&local_80 - extraout_x8,param_7,param_7,param_1,uVar1,uVar2);
  local_58 = (undefined4)param_2;
  local_54 = (undefined1)((ulong)param_2 >> 0x20);
  local_51 = 0;
  FUN_1005f8df4();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&local_58,&local_51,param_4,&DAT_1009dc358,param_7);
  if (unaff_x21 == 0) {
    local_68 = local_80;
    local_52 = 1;
    puVar3 = &DAT_100aaf010;
    FUN_100004bb4(&DAT_100aaf010,&BYTE_100845020);
    puVar4 = &DAT_100aaf018;
    FUN_1005fc6b4(&DAT_100aaf018,FUN_1005f8df4,PTR___sSayxGSEsSERzlMc_100995880);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_68,&local_52,param_4,puVar3,puVar4);
  }
  (**(code **)(lVar5 + 8))((long)&local_80 - extraout_x8,param_4);
  return;
}

