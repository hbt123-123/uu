// rea decompile_all
// name: FUN_100237ce0
// address: 0x100237ce0
// body: available
// range: 0x100237ce0-0x100237ed7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100237ecc) */

undefined8 FUN_100237ce0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined *local_a8 [11];
  
  puVar4 = (undefined1 *)0xd00000000000001d;
  if (param_1 == 3) {
    pcVar5 = "FLERKEN_increase_user_profile";
  }
  else {
    if (param_1 == 2) {
      pcVar5 = "FLERKEN_increase_user_profile";
      puVar4 = (undefined1 *)0xd00000000000001b;
      goto joined_r0x000100237d54;
    }
    if (param_1 != 1) {
      pcVar5 = "FLERKEN_set_once_user_profile";
      puVar4 = &DAT_d000000000000018;
      goto joined_r0x000100237d54;
    }
    pcVar5 = "FLERKEN_set_once_user_profile";
  }
  pcVar5 = pcVar5 + -0x20;
joined_r0x000100237d54:
  local_a8[0] = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_100234418();
    local_a8[0] = puVar1;
  }
  puVar1 = &DAT_100a7f178;
  FUN_100004bb4(&DAT_100a7f178,&DAT_100814010);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x7265706f72705f5f;
  *(undefined8 *)(puVar1 + 0x28) = 0xec00000073656974;
  puVar2 = &DAT_100a7f028;
  FUN_100004bb4(&DAT_100a7f028,&DAT_100813c40);
  *(undefined **)(puVar1 + 0x48) = puVar2;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_2);
  puVar2 = puVar1;
  FUN_100234418(puVar1);
  _swift_setDeallocating(puVar1);
  FUN_100040bb4(puVar1 + 0x20,&DAT_100a7f180,&DAT_100813c98);
  puVar1 = local_a8[0];
  _swift_isUniquelyReferenced_nonNull_native(local_a8[0]);
  FUN_1002379a8(puVar2,FUN_10023fa68,0,puVar1,local_a8);
  _swift_bridgeObjectRelease(puVar2);
  puVar1 = local_a8[0];
  uVar3 = 0;
  FUN_100232e2c(0);
  _objc_allocWithZone();
  FUN_100233c5c(puVar4,(ulong)pcVar5 | 0x8000000000000000,puVar1,uVar3);
  FUN_100237814(0);
  FUN_100234814(puVar4);
  return 0;
}

