// rea decompile_all
// name: FUN_1003e41d0
// address: 0x1003e41d0
// body: available
// range: 0x1003e41d0-0x1003e4297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003e4294 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e41d0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50) + 0x30 &
          ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff);
  lVar5 = *(long *)(lVar6 + 0x40);
  lVar2 = 0;
  __sSqMa(0,lVar1);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar7 + lVar5 + uVar4 & (uVar4 ^ 0xffffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  (**(code **)(lVar6 + 8))(unaff_x20 + uVar7,lVar3);
  lVar2 = *(long *)(lVar1 + -8);
  lVar3 = unaff_x20 + uVar4;
  (**(code **)(lVar2 + 0x30))(lVar3,1,lVar1);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar2 + 8))(unaff_x20 + uVar4,lVar1);
  }
  _swift_deallocObject();
  return;
}

