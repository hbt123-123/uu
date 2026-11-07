// rea decompile_all
// name: FUN_1003f7314
// address: 0x1003f7314
// body: available
// range: 0x1003f7314-0x1003f751b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003f74c8) */
/* WARNING: Removing unreachable block (ram,0x0001003f73f4) */

void FUN_1003f7314(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined8 *puVar9;
  undefined *local_80;
  undefined1 local_78 [24];
  undefined8 local_58;
  
  puVar2 = &DAT_100a8dae0;
  FUN_100004bb4(&DAT_100a8dae0,&DAT_100824018);
  lVar8 = *(long *)(puVar2 + -8);
  local_80 = puVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)(unaff_x20 + 0x18);
  *puVar9 = 0;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,uVar7);
  FUN_1003f7268();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (local_78 + (-8 - extraout_x8),&DAT_1009bc050,&DAT_1009bc050,lVar3,uVar7,uVar1);
  puVar2 = local_80;
  if (unaff_x21 == 0) {
    local_78[0] = 0;
    puVar4 = local_78;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar4,local_80);
    *(undefined1 **)(unaff_x20 + 0x10) = puVar4;
    puVar5 = &DAT_100a8dac8;
    FUN_100004bb4(&DAT_100a8dac8,&DAT_100824010);
    local_78[0] = 1;
    puVar6 = &DAT_100a8dae8;
    FUN_1003f751c(&DAT_100a8dae8,&DAT_100a8daf0,&TargetProtocolConformanceDescriptor_1008240d0,
                  PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_58,puVar5,local_78,puVar2,puVar5,puVar6);
    (**(code **)(lVar8 + 8))(local_78 + (-8 - extraout_x8),puVar2);
    _swift_beginAccess(puVar9,local_78,1,0);
    uVar7 = *puVar9;
    *puVar9 = local_58;
    _swift_bridgeObjectRelease(uVar7);
  }
  else {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
    FUN_1003f6a08();
    _swift_deallocPartialClassInstance();
  }
  FUN_10003f094(param_1);
  return;
}

