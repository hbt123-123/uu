// rea decompile_all
// name: FUN_100413e1c
// address: 0x100413e1c
// body: available
// range: 0x100413e1c-0x100413fbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100413f24) */

undefined1 * FUN_100413e1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long extraout_x8;
  undefined1 *unaff_x21;
  long lVar5;
  undefined1 auStack_70 [12];
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  
  puVar3 = &DAT_100a8e4c8;
  FUN_100004bb4(&DAT_100a8e4c8,&DAT_100825770);
  lVar5 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  FUN_10003f030(param_1,uVar1);
  FUN_100413d38();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_70 + -extraout_x8,&DAT_1009bd118,&DAT_1009bd118,lVar4,uVar1,uVar2);
  if (unaff_x21 == (undefined1 *)0x0) {
    local_61 = 0;
    unaff_x21 = &local_61;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(unaff_x21,puVar3);
    local_62 = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_62,puVar3);
    local_63 = 2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(&local_63,puVar3);
    local_64 = 3;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_64,puVar3);
    (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,puVar3);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return unaff_x21;
}

