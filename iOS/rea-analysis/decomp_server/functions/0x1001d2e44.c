// rea decompile_all
// name: FUN_1001d2e44
// address: 0x1001d2e44
// body: available
// range: 0x1001d2e44-0x1001d3047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1001d2e44(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar2 = &DAT_100a7d410;
  FUN_100004bb4(&DAT_100a7d410,&DAT_100812380);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&local_60 - extraout_x8;
  puVar2 = &DAT_100a7d418;
  FUN_100004bb4(&DAT_100a7d418,&DAT_100812388);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar6 - extraout_x8_00;
  lVar3 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar9 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_60 = param_1;
  uStack_58 = param_2;
  __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(lVar8);
  FUN_10009ff0c();
  lVar5 = lVar8;
  puVar2 = PTR___sSSN_1009957f8;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF(lVar8,PTR___sSSN_1009957f8,lVar4);
  (**(code **)(lVar9 + 8))(lVar8,lVar3);
  _swift_bridgeObjectRetain(puVar2);
  __s7Network11IPv4AddressVyACSgSScfC(lVar7,lVar5,puVar2);
  lVar3 = 0;
  __s7Network11IPv4AddressVMa();
  lVar4 = lVar7;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar7,1,lVar3);
  if ((int)lVar4 == 1) {
    FUN_100040bb4(lVar7,&DAT_100a7d418,&DAT_100812388);
    __s7Network11IPv6AddressVyACSgSScfC(lVar6,lVar5,puVar2);
    lVar5 = 0;
    __s7Network11IPv6AddressVMa();
    lVar4 = lVar6;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar6,1,lVar5);
    bVar1 = (int)lVar4 != 1;
    FUN_100040bb4(lVar6,&DAT_100a7d410,&DAT_100812380);
  }
  else {
    _swift_bridgeObjectRelease(puVar2);
    FUN_100040bb4(lVar7,&DAT_100a7d418,&DAT_100812388);
    bVar1 = true;
  }
  return bVar1;
}

