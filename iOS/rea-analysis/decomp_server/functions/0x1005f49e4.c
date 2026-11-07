// rea decompile_all
// name: FUN_1005f49e4
// address: 0x1005f49e4
// body: available
// range: 0x1005f49e4-0x1005f4b87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005f49e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined4 *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [23];
  undefined1 local_81;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar3 = &DAT_100aaf040;
  FUN_100004bb4(&DAT_100aaf040,&BYTE_100845038);
  lVar5 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1005f9078();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_a0 + -extraout_x8,&DAT_1009dc9d0,&DAT_1009dc9d0,param_1,uVar1,uVar2);
  local_80 = local_80 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(*unaff_x20,&local_80,puVar3);
  if (unaff_x21 == 0) {
    uStack_58 = *(undefined8 *)(unaff_x20 + 4);
    local_60 = *(undefined8 *)(unaff_x20 + 2);
    uStack_78 = *(undefined8 *)(unaff_x20 + 4);
    local_80 = *(ulong *)(unaff_x20 + 2);
    local_81 = 1;
    puVar4 = &local_60;
    FUN_1005f90b8(puVar4,auStack_98);
    FUN_1005f90f4();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_80,&local_81,puVar3,PTR___s10Foundation4DataVN_1009961e8,puVar4);
    FUN_100006cdc(local_80,uStack_78);
    uStack_68 = *(undefined8 *)(unaff_x20 + 8);
    uStack_70 = *(undefined8 *)(unaff_x20 + 6);
    uStack_78 = *(undefined8 *)(unaff_x20 + 8);
    local_80 = *(ulong *)(unaff_x20 + 6);
    local_81 = 2;
    FUN_1005f90b8(&uStack_70,auStack_98);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_80,&local_81,puVar3,PTR___s10Foundation4DataVN_1009961e8,puVar4);
    FUN_100006cdc(local_80,uStack_78);
  }
  (**(code **)(lVar5 + 8))(auStack_a0 + -extraout_x8,puVar3);
  return;
}

