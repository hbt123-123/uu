// rea decompile_all
// name: FUN_1001a0298
// address: 0x1001a0298
// body: available
// range: 0x1001a0298-0x1001a04ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001a03fc) */

void FUN_1001a0298(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  long lVar7;
  undefined8 local_70;
  undefined1 local_61;
  undefined8 local_58;
  
  puVar3 = &DAT_100a7c848;
  local_70 = param_3;
  FUN_100004bb4(&DAT_100a7c848,&DAT_100810d88);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&local_70 - extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1001a0c2c();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar6,&DAT_1009a1c38,&DAT_1009a1c38,param_1,uVar1,uVar2);
  local_61 = 0;
  puVar4 = &DAT_100a7c818;
  local_58 = param_2;
  FUN_100004bb4(&DAT_100a7c818,&DAT_100810d78);
  puVar5 = &DAT_100a7c850;
  FUN_1001a0d5c(&DAT_100a7c850,FUN_1001a0dcc,PTR___sSayxGSEsSERzlMc_100995880);
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&local_58,&local_61,puVar3,puVar4,puVar5);
  if (unaff_x21 == 0) {
    local_58 = local_70;
    local_61 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_58,&local_61,puVar3,puVar4,puVar5);
    local_61 = 2;
    puVar4 = &DAT_100a7c830;
    local_58 = param_4;
    FUN_100004bb4(&DAT_100a7c830,&DAT_100810d80);
    puVar5 = &DAT_100a7c860;
    FUN_1001a0cac(&DAT_100a7c860,FUN_1001a0e0c,PTR___sSayxGSEsSERzlMc_100995880);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_58,&local_61,puVar3,puVar4,puVar5);
    (**(code **)(lVar7 + 8))(lVar6,puVar3);
  }
  else {
    (**(code **)(lVar7 + 8))(lVar6,puVar3);
  }
  return;
}

