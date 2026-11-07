// rea decompile_all
// name: FUN_1001c1f90
// address: 0x1001c1f90
// body: available
// range: 0x1001c1f90-0x1001c20cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c1f90(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined1 local_51;
  
  puVar3 = &DAT_100a7d0f0;
  local_78 = param_4;
  FUN_100004bb4(&DAT_100a7d0f0,&DAT_100811da8);
  lVar4 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1001c5574();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_80 + -extraout_x8,&DAT_1009a2f10,&DAT_1009a2f10,param_1,uVar1,uVar2);
  local_70 = local_70 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(param_2,&local_70,puVar3);
  if (unaff_x21 == 0) {
    uStack_68 = local_78;
    local_51 = 1;
    local_70 = param_3;
    FUN_1001c55f4();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_70,&local_51,puVar3,&DAT_1009a3018,param_2);
  }
  (**(code **)(lVar4 + 8))(auStack_80 + -extraout_x8,puVar3);
  return;
}

