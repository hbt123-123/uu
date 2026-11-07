// rea decompile_all
// name: FUN_10040ee78
// address: 0x10040ee78
// body: available
// range: 0x10040ee78-0x10040efeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040ee78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_a1;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar3 = &DAT_100a8e380;
  FUN_100004bb4(&DAT_100a8e380,&DAT_100824d30);
  lVar4 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_10040efec();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            ((long)&local_100 - extraout_x8,&DAT_1009bcff8,&DAT_1009bcff8,param_1,uVar1,uVar2);
  local_100 = local_100 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(*unaff_x20,&local_100,puVar3);
  if (unaff_x21 == 0) {
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_90 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x30);
    local_80 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_70 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_58 = *(undefined8 *)(unaff_x20 + 0x50);
    local_60 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_98 = *(undefined8 *)(unaff_x20 + 0x10);
    local_a0 = *(ulong *)(unaff_x20 + 8);
    local_a1 = 1;
    FUN_10040f02c();
    FUN_10040f060();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_a0,&local_a1,puVar3,&DAT_1009bc9e0,unaff_x20);
    uStack_d8 = uStack_78;
    local_e0 = local_80;
    uStack_c8 = uStack_68;
    uStack_d0 = uStack_70;
    uStack_b8 = uStack_58;
    local_c0 = local_60;
    uStack_f8 = uStack_98;
    local_100 = local_a0;
    uStack_e8 = uStack_88;
    uStack_f0 = uStack_90;
    FUN_10040f0a0(&local_100);
  }
  (**(code **)(lVar4 + 8))((long)&local_100 - extraout_x8,puVar3);
  return;
}

