// rea decompile_all
// name: FUN_1001a075c
// address: 0x1001a075c
// body: available
// range: 0x1001a075c-0x1001a096f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001a08c4) */

void FUN_1001a075c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100a7c898;
  FUN_100004bb4(&DAT_100a7c898,&DAT_100810fc8);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  FUN_10003f030(param_1,uVar1);
  FUN_1001a0f9c();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_70 - extraout_x8,&DAT_1009a1de8,&DAT_1009a1de8,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_51 = 0;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(&local_51,puVar3);
    local_52 = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(&local_52,puVar3);
    local_53 = 2;
    puVar5 = &local_53;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar5,puVar3);
    local_64 = SUB84(puVar5,0);
    local_54 = 3;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(&local_54,puVar3);
    local_55 = 4;
    puVar5 = &local_55;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar5,puVar3);
    local_68 = SUB84(puVar5,0);
    local_56 = 5;
    puVar5 = &local_56;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar5,puVar3);
    local_57 = 6;
    local_70 = puVar5;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(&local_57,puVar3);
    (**(code **)(lVar6 + 8))((long)&local_70 - extraout_x8,puVar3);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return;
}

