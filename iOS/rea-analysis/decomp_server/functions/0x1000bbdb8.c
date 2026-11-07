// rea decompile_all
// name: FUN_1000bbdb8
// address: 0x1000bbdb8
// body: available
// range: 0x1000bbdb8-0x1000bbf33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000bbf30 to 0x1000c2050 FUN_1000c2050 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000bbdb8(ulong *param_1)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  ulong uVar8;
  
  puVar2 = param_1;
  FUN_1003b2720();
  uVar8 = *puVar2;
  uVar3 = uVar8;
  _swift_retain();
  FUN_10039a5f0();
  _swift_release(uVar8);
  if (uVar3 == 2) {
    uVar3 = *param_1;
    if ((uVar3 == 0x6d6f74737563 && param_1[1] == 0xe600000000000000) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar3 & 1) != 0)) {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x98);
      uVar5 = *(undefined8 *)(unaff_x20 + 0xa0);
      uVar6 = *(undefined8 *)(unaff_x20 + 0xa8);
      uVar7 = *(undefined8 *)(unaff_x20 + 0xb0);
      *(undefined8 *)(unaff_x20 + 0xa0) = 0xe300000000000000;
      *(undefined8 *)(unaff_x20 + 0x98) = 0x796964;
      *(undefined8 *)(unaff_x20 + 0xb0) = 0xe000000000000000;
      *(undefined8 *)(unaff_x20 + 0xa8) = 0;
      uVar1 = *(undefined1 *)(unaff_x20 + 0xb8);
      *(undefined1 *)(unaff_x20 + 0xb8) = 2;
    }
    else {
      uVar3 = param_1[3];
      if (uVar3 == 0) {
        uVar8 = 0;
        uVar3 = 0xe000000000000000;
      }
      else {
        uVar8 = param_1[2];
      }
      uVar4 = *(undefined8 *)(unaff_x20 + 0x98);
      uVar5 = *(undefined8 *)(unaff_x20 + 0xa0);
      uVar6 = *(undefined8 *)(unaff_x20 + 0xa8);
      uVar7 = *(undefined8 *)(unaff_x20 + 0xb0);
      *(undefined8 *)(unaff_x20 + 0xa0) = 0xe600000000000000;
      *(undefined8 *)(unaff_x20 + 0x98) = 0x746573657270;
      *(ulong *)(unaff_x20 + 0xa8) = uVar8;
      *(ulong *)(unaff_x20 + 0xb0) = uVar3;
      uVar1 = *(undefined1 *)(unaff_x20 + 0xb8);
      *(undefined1 *)(unaff_x20 + 0xb8) = 2;
      _swift_bridgeObjectRetain();
    }
    FUN_1000c2050(uVar4,uVar5,uVar6,uVar7,uVar1);
    return;
  }
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1000c2118);
  return;
}

