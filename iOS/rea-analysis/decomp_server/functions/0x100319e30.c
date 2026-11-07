// rea decompile_all
// name: FUN_100319e30
// address: 0x100319e30
// body: available
// range: 0x100319e30-0x100319f53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100319f40) */

void FUN_100319e30(void)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(*unaff_x20 + 0x58);
  lVar1 = 0;
  __sSqMa(0,lVar4);
  lVar6 = *(long *)(lVar1 + -8);
  puVar3 = auStack_80 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = unaff_x20[3];
  plVar7 = *(long **)(lVar2 + _TtC9Alamofire7Request::mutableState);
  uVar5 = *(undefined8 *)(plVar7[2] + 0x10);
  _os_unfair_lock_lock(uVar5);
  lVar8 = *(long *)(*plVar7 + 0x60);
  _swift_beginAccess((long)plVar7 + lVar8,auStack_78,0x21,0);
  FUN_1002d0d94((long)plVar7 + lVar8,lVar2);
  _swift_endAccess(auStack_78);
  _os_unfair_lock_unlock(uVar5);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar3,1,1,lVar4);
  FUN_1002c6fd8(puVar3);
  (**(code **)(lVar6 + 8))(puVar3,lVar1);
  return;
}

